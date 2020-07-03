// program that returns the elapsed time between two times

#include <stdio.h>

struct time
{
    float hours;
    float minutes;
    float seconds;
};

// return the elapsed time in  hours, minutes, and seconds
struct time elapsedTime(struct time time1, struct time time2)
{
    struct time elapsedTime;

    // seconds
    if ( time1.seconds > time2.seconds ) {
        elapsedTime.seconds = 60.0 - (time1.seconds - time2.seconds);
        elapsedTime.minutes = -1.0;  // crossing the minute border
    } else
        elapsedTime.seconds = time2.seconds - time1.seconds;

    // minutes
    if ( time1.minutes > time2.minutes ) {
        elapsedTime.minutes += 60.0 - (time1.minutes - time2.minutes);
        elapsedTime.hours = -1.0;  // crossing the hour border
    } else
        elapsedTime.minutes += time2.minutes - time1.minutes;

    // hours
    if ( time1.hours > time2.hours )
        elapsedTime.hours += 24.0 - (time1.hours - time2.hours);
    else
        elapsedTime.hours += time2.hours - time1.hours;

    return elapsedTime;
}


int main(int argc, char const *argv[])
{
    struct time elapsedTime(struct time time1, struct time time2);
    struct time time1 = {.hours = 10, .minutes = 45, .seconds = 15};
    struct time time2 = {.hours = 9, .minutes = 44, .seconds = 03};

    struct time et = elapsedTime(time1, time2);
    printf("Time 1:  %i:%02i:%02i\n", (int) time1.hours, (int) time1.minutes, (int) time1.seconds);
    printf("Time 2:  %i:%02i:%02i\n", (int) time2.hours, (int) time2.minutes, (int) time2.seconds);
    printf("Elapsed: %i:%02i:%02i\n", (int) et.hours, (int) et.minutes, (int) et.seconds);

    return 0;
}