// Program to calculate the number of days elapsed between two dates

#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

// return number of days elapsed between two dates
int elapsedDays(struct date date1, struct date date2) {
    int n1, n2;

    int f(struct date date) {
        if ( date.month <= 2 ) {
            return date.year - 1;
        } else {
            return date.year;
        }
    }

    int g(struct date date) {
        if ( date.month <= 2 ) {
            return date.month + 13;
        } else {
            return date.month + 1;
        }
    }

    n1 = 1461 * f(date1) / 4 + 153 * g(date1) / 5 + date1.day;
    n2 = 1461 * f(date2) / 4 + 153 * g(date2) / 5 + date2.day;
    return n2 - n1;
}

int main(int argc, char const *argv[])
{

    int ed;
    struct date date1, date2;
    int elapsedDays(struct date date1, struct date date2);

    printf("Enter first date (mm dd yyyy): ");
    scanf("%i%i%i", &date1.month, &date1.day, &date1.year);
    printf("");
    printf("Enter second date (mm dd yyyy): ");
    scanf("%i%i%i", &date2.month, &date2.day, &date2.year);
    printf("");
    ed = elapsedDays(date1, date2);
    printf("Number of elapsed days: %i.\n", ed);

    return 0;
}