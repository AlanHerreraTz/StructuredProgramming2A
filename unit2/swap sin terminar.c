#include <stdio.h>
#include "./utils.h"
#include <stdlib.h>

int a = 10;
int b = 20;

int main (){
    printf("Num1: %d, Num2: %d\n", a, b);
    int* new1 = &a;
    int* new2 = &b;
    printf("Swap numbers: \n");
    swapvariables (&a, &b);
    printf("Swap values: \n");
     printf("Num1=%d, Num2: %d\n", a , b);

    return 0;    
    
    }