// Program to update the time by one second

#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main(int argc, char const *argv[])
{
    struct time timeUpdate(struct time now);
    struct time currentTime, nextTime;

    printf("Enter the time (hh:mm:ss): \n");
    scanf("%i:%i:%i", &currentTime.hours, &currentTime.minutes, &currentTime.seconds);

    nextTime = timeUpdate(currentTime);

    printf("Update time is %.2i:%.2i:%.2i", nextTime.hours, nextTime.minutes, nextTime.seconds);

    return 0;
}

// Function to update the time by one second
struct time timeUpdate(struct time now)
{
    ++now.seconds;

    if ( now.seconds == 60 )
    {   //next minutes
        now.seconds = 0;
        ++now.minutes;

        if ( now.minutes == 60 )
        {   // next hour
            now.minutes = 0;
            ++now.hours;

            if ( now.hours == 24 )
            {   // next hour
                now.hours = 0;           
            }

        }
    }

    return now;
};
