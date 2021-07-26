#include <stdio.h>
#include <string.h>
#define TAM 90
 
void readLine(char cadena[], int tam)
{
    char c;
    fgets(cadena,tam,stdin);
    if (cadena[strlen(cadena)-1] == '\n')
        cadena[strlen(cadena)-1] = '\0';
    else
    {
        cadena[tam-1] = '\0';
        while((c = getchar()) != '\n'){};
    }
}
int main()
{
    char frase[TAM];
    printf("Digit your sentence: ");
    readLine(frase,TAM);
    printf("%s\n ",frase);
 
    int i=strlen(frase);
    int aux;
    for(i; i>=0; i--)
    {
        if(frase[i]==' '){
            aux = i+1;
            while(frase[aux] !=' '){
                if(aux==strlen(frase))
                    break;
                printf("%c",frase[aux]);
                aux++;
            }
            printf(" ");
        }
        if(i==0){
            aux = i;
            while(frase[aux] !=' '){
                printf("%c",frase[aux]);
                aux++;
            }
        }
    }
    return 0;
}