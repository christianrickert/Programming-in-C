// Program to illustrate arrays of structures

#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main(void)
{
    struct time timeUpdate(struct time now);
    struct time testTimes[5] = { {11, 59, 59}, {12, 0, 0}, {1, 29, 59}, {23, 59, 59}, {19, 12, 27} };

    int i;

    for (i = 0; i < 5; ++i)
    {
        printf("The time is %.2i:%.2i:%.2i, ", testTimes[i].hours, testTimes[i].minutes, testTimes[i].seconds);
        
        testTimes[i] = timeUpdate(testTimes[i]);

        printf("one second later it's %.2i:%.2i:%.2i.\n", testTimes[i].hours, testTimes[i].minutes, testTimes[i].seconds);
    }
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
