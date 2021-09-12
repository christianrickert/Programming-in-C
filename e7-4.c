#include <stdio.h>

int main(int argc, char const *argv[])
{
    int index = 0;
    float array[10], average = 0.0;

    for (index = 0; index < 10; ++index)
    {
        printf("Please enter floating-point value (%i/10): ", index+1);
        scanf("%f", &array[index]);
    }

    for (index = 0; index < 10; ++index)
        average += array[index];
    average /= 10.0;
    printf("The average of all floating-point values is: %f ", average);

    return 0;
}
