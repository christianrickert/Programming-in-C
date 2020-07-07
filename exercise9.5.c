// clockKeeper function updates both the time and the date from a dateAndTime structure

#include <stdio.h>
#include <stdbool.h>

struct date
{
    int year;
    int month;
    int day;
};

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

// Function to update the time by one second
struct dateAndTime timeUpdate(struct dateAndTime now)
{
    ++now.stime.seconds;

    if ( now.stime.seconds == 60 )
    {   //next minutes
        now.stime.seconds = 0;
        ++now.stime.minutes;

        if ( now.stime.minutes == 60 )
        {   // next hour
            now.stime.minutes = 0;
            ++now.stime.hours;

            if ( now.stime.hours == 24 )
            {   // next day
                now.stime.hours = 0;
            }

        }
    }

    return now;
};

// Function to determine if it's a leap year
bool isLeapYear(struct date d)
{
    bool leapYearFlag;

    if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
        leapYearFlag = true;    // it's a leap year
    else
        leapYearFlag = false;   // it's not a leap year

    return leapYearFlag;
};

// Fuction to find the number of days in a month
int numberOfDays(struct date d)
{
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ( isLeapYear(d) == true && d.month == 2 )
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
};

// Function to calculate tomorrow's date
struct dateAndTime dateUpdate(struct dateAndTime today)
{
    struct dateAndTime tomorrow;
    int numberOfDays(struct date d);

    if ( today.sdate.day != numberOfDays(today.sdate) )
    {
        tomorrow.sdate.day = today.sdate.day + 1;
        tomorrow.sdate.month = today.sdate.month;
        tomorrow.sdate.year = today.sdate.year;
    }
    else if ( today.sdate.month == 12 )   // end of year
    {
        tomorrow.sdate.day = 1;
        tomorrow.sdate.month = 1;
        tomorrow.sdate.year = today.sdate.year + 1;
    }
    else    // end of month
    {
        tomorrow.sdate.day = 1;
        tomorrow.sdate.month = today.sdate.month + 1;
        tomorrow.sdate.year = today.sdate.year;
    }

    return tomorrow;
};

// calls timeUpdate and dateUpdate
struct dateAndTime clockKeeper(struct dateAndTime now)
{
    timeUpdate(now);
    if (now.stime.hours == 0)
    {
        dateUpdate(now);
    }

};

int main(int argc, char const *argv[])
{
    struct dateAndTime todaynow= {{2, 1, 2004}, {23, 59, 59}};
    clockKeeper(todaynow);
    return 0;
}
