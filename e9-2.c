// Program to calculate the number of days elapsed between two dates

#include <stdio.h>

struct date
{
    float month;
    float day;
    float year;
};

// return number of days elapsed between two dates
float elapsedDays(struct date date1, struct date date2) {
    float n1, n2;

    float f(struct date date) {
        if ( date.month <= 2 ) {
            return date.year - 1;
        } else {
            return date.year;
        }
    }

    float g(struct date date) {
        if ( date.month <= 2 ) {
            return date.month + 13;
        } else {
            return date.month + 1;
        }
    }

    n1 = 1461 * f(date1) / 4 + 153 * g(date1) / 5 + date1.day;
    printf("%g\n", n1);
    n2 = 1461 * f(date2) / 4 + 153 * g(date2) / 5 + date2.day;
    printf("%g\n", n2);
    return n2 - n1;
}

int main(int argc, char const *argv[])
{

    float ed;
    struct date date1, date2;
    float elapsedDays(struct date date1, struct date date2);

    printf("Enter first date (mm dd yyyy): ");
    scanf("%g%g%g", &date1.month, &date1.day, &date1.year);
    printf("");
    printf("Enter second date (mm dd yyyy): ");
    scanf("%g%g%g", &date2.month, &date2.day, &date2.year);
    printf("");
    ed = elapsedDays(date1, date2) + 0.5;
    printf("Number of elapsed days (rounded): %i.\n", (int)ed);

    return 0;
}
