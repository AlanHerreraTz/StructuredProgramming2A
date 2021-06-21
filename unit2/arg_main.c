#include <stdio.h>
#include <stdlib.h> //atoi, atof
#include <string.h> //strcpy

int my_int = 0; // %i o %d
float my_float = 3.14; // %f
char my_char ='c'; // %c
char my_str[10] ="hola"; // %s el numero dentro del corchete indica la cantidad de caracteres dentro de la cadena de texto

float second_float = 0.0;

// pointer //
int* my_ptr_int = &my_int; // %p

int main (int argc, char** argv) {
    //pegando el argv1 a la variable string
    
    strcpy(my_str, argv[1]); 
    //convertir string a entero
    int base = atoi (  my_str ) ;
    strcpy(my_str, argv[2]); 

    int altura = atoi ( my_str);
    


    printf( "my_int: %i, my_float: %f, my_chan: %c, my_str: %s, mt_ptr_int: %p  .\n", my_int, my_float, my_char, my_str, my_ptr_int);
    printf( "argc: %i, element1: %i . element 2: %s char: %c \n",argc, base*altura, argv[2], 'A' );

    return 0;
}