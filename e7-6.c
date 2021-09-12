// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main( int argc, char const *argv[] ) {
    
    // without arrays
    int index, fibo_1, fibo_2, fibo_3;

    for ( index = 0; index < 15; ++index ) {
        switch ( index ) {
            case 0:
                    fibo_1 = 0;
                    printf("%i\n", fibo_1);
                    break;
            case 1:
                    fibo_2 = 1;
                    printf("%i\n", fibo_2);
                    break;
            default:
                    fibo_3 = fibo_2 + fibo_1;
                    printf("%i\n", fibo_3);
                    fibo_1 = fibo_2;
                    fibo_2 = fibo_3;
                    break;
        }


    }
    
    return 0;
}
