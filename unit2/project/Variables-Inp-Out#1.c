//  Design a program that receives a list of numbers using argv argument and print the 
// average value in the console. (C, Python)

#include<stdio.h>
#include<stdlib.h>
  
void main(int argc, char * argv[]) {

    int cont, x = 0; float y; 
 
    printf("The average value of the list of numbers is:  \n");

    for (cont = 1; cont < argc; cont++)
    {
        x = x + atoi(argv[cont]);
      }       
    argc--;

    y = x / argc;
    
    printf("%.1f\n",y);

}