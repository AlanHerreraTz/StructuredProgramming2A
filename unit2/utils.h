#include <stdio.h>
//#include <stdlib.h> //atoi, atof , springf
//#include <string.h> // strcpy
#define pi 3.1416

int libInteger = 24; //todas las variables de esta biblioteca son globales, no locales


void sayHello (char message [] ){
    printf( "%s\n" , message  );
}

void sayName (char message [] ){
    printf("%s\n", message);


}

int addtwonumbers (int argumento1, int argumento2){
    int result = argumento1 + argumento2 ;   
    return result; 
}
