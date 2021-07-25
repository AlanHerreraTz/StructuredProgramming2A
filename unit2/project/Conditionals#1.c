/* 1.	Design a C program that asks for a username and its years old. Then, you will need to check if the user has enough years old to keep in the program.
o	If the user is less than 18 years old show a warning message.
o	Otherwise, you will show a welcome message. */

#include <stdio.h>

int main() {

    char username [50];
    int age;
    printf( "Digit your username: "); scanf ("%s", username);
    printf("Now, enter your age: "); scanf ("%i", &age);

    if (age >= 18) {
        printf ("Welcome to the program %s. \n", username);
    }
    else { printf ( "Sorry %s, you are not old enough to use the program. \n", username);}

    return 0;
}


