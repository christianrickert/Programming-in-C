#include <stdio.h>

int main(int argc, char const *argv[])
{

    int maxResponses;

    printf("Enter your maximum number of responses: \n");
    scanf("%i", &maxResponses);
    maxResponses = ( maxResponses > 0 ) ? maxResponses : 1;

    int ratingCounters[11], i, response;

    for (i = 1; i <= 10; ++i)
        ratingCounters[i] = 0;

    printf("Enter your responses: \n");

    i = 1;
    while ( i <= maxResponses )
    {
        scanf("%i", &response);

        if ( response == 999 )
            break;
        else if ( response < 1 || response > 10 )
            printf("Bad response: %i\n", response);
        else
        {
            ++ratingCounters[response];
            ++i;
        }
    }
    
    printf("\n\nRating    Number of Responses\n");
    printf("---------------------------------\n");

    for (i = 1; i < 10; ++i)
    {
        printf("%4i%14i\n", i, ratingCounters[i]);
    }

    return 0;
}
