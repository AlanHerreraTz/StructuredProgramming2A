#include <stdio.h>
#include "./utils.h"
//#include "/mnt/c/Users/Alan/Documents/StructuredProgramming2A/unit2/foldertest/utils.h"

int myNumber = 3;
float myFloat = 3.1416;
char mystring [250] = "Hello World";

//Declarar y definirla
//void sayHello (char message [] ){
//    printf( "%s\n" , message  );
//}

//segundo metodo para funciones

//1.-Declaro
//void sayName ( char message [] );

//int addtwonumbers ( int argumento1, int argumento2 ); //declarando;
    
int main(   ) {

    sayHello ( "Hola mundo" );
    sayName("Alan");
    int myResult = addtwonumbers ( 2, 5 );
    printf ( "myResult is equal to: %d \n", myResult );

    printf("%d\n", libInteger);

    return 0;
}

//segundo metodo para funciones 
 
//2.- Definimos
//void sayName (char message [] ){
//    printf("%s\n", message);


//}

//addtwonumbers (int argumento1, int argumento2){
//    int result = argumento1 + argumento2 ;   
//    return result; 
//}



