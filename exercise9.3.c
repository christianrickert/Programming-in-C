// program that returns the elapsed time between two times

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
    float elapsedSeconds = 0;

    // hours
    if ( times2.hours < times1.hours )
        elapsedSeconds = (24 * 60 * 60) - (time1.hours - time2.hours);
    else
        elapsedSeconds = time2.hours - time1.hours;

    // minutes
    if ( times2.minutes < times1.minutes )
        elapsedSeconds += (60 * 60) - (time1.minutes - time2.minutes);
    else
        elapsedSeconds += time2.minutes - time1.minutes;

    // seconds
    if ( times2.seconds < times1.seconds )
        elapsedSeconds += (60) - (time1.seconds - time2.seconds);
    else
        elapsedSeconds += time2.seconds - time1.seconds;

    elapsedTime = {.hours = (int) ,
                   .minutes = (int) ,
                   .seconds = (int) };

}


int main(int argc, char const *argv[])
{
    struct time time1, time2, et;
    time1 = {.hours = 3, .minutes=45, .seconds=15};
    time2 = {.hours = 9, .minutes=44, .seconds=03};
    struct time elapsedTime(struct time time1, struct time time2);

    et = elapsedTime(time1, time2);
    printf("Number of elapsed time (rounded): %i:%i:%i.\n", (int) et.hours, et.minutes, et.seconds);

    return 0;
}