// program displays the day of the week on which a particular date falls

#include <stdio.h>

struct date
{
    float month;
    float day;
    float year;
};

// return day of the week as a number (0-6)
int dayOfWeek(struct date date) {
    float n;

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

    n = 1461 * f(date) / 4 + 153 * g(date) / 5 + date.day;
    n -= 621049;
    n = (int) n % 7;
    return n;
}

int main(int argc, char const *argv[])
{

    int dow;
    char dows[8][9] = { {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'M', 'o', 'n', 'd', 'a', 'y', ' ', ' ', ' '},
                        {'T', 'u', 'e', 's', 'd', 'a', 'y', ' ', ' '},
                        {'W', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y'},
                        {'T', 'h', 'u', 'r', 's', 'd', 'a', 'y', ' '},
                        {'F', 'r', 'i', 'd', 'a', 'y', ' ', ' ', ' '},
                        {'S', 'a', 't', 'u', 'r', 'd', 'a', 'y', ' '},
                        {'S', 'u', 'n', 'd', 'a', 'y', ' ', ' ', ' '} };
    struct date date;
    int dayOfWeek(struct date date);

    printf("Enter first date (mm dd yyyy): ");
    scanf("%g%g%g", &date.month, &date.day, &date.year);
    dow = dayOfWeek(date);
    printf("Day of the week is: ");
    printf("%c%c%c%c%c%c%c%c%c.", dows[dow][0],
                                 dows[dow][1],
                                 dows[dow][2],
                                 dows[dow][3],
                                 dows[dow][4],
                                 dows[dow][5],
                                 dows[dow][6],
                                 dows[dow][7],
                                 dows[dow][8]);

    return 0;
}
