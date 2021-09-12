// Write a function called 'monthName'that takes as its argument
// a value fo type 'enum month' (as defined in this chapter) and
// returns a pointer to a character string containing the name
// of the month

#include <stdio.h>

// definition from chapter
enum month {january = 1, february, march, april, may, june, july,
                         august, september, october, november, december};

// create pointer array with corresponding month strings
char *months[] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY",
                                "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

// function takes the enum value as an array index to return the month string
char *monthName(enum month num)
{
    return months[num - 1];
}

int main(int argc, char const *argv[])
{
    char *monthName(enum month num);
    int mo = 2;

    printf("%s\n", monthName(mo));

    return 0;
}
