// Design a program that gets all the numbers divisible by 3 and 5

#include <stdio.h>

int main () {
    int num, i;
    printf( "Digit a number to evaluate: "); scanf ("%i", &num);

    for ( i=1; i <= num; i++) {
        if ( i%3==0 && i%5==0){

            printf ( "The numbers are: %d \n", i);
        }
    }

    return 0;
}