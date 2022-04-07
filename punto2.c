#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(){
    char *v[5];
    char aux[MAX];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre: \n");
        gets(aux);
        v[i]= (char *) malloc(strlen((aux)+1)*sizeof(char));
        strcpy(v[i], aux);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("el nombre es: \n");
        puts(v[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        free(v[i]);
    }

    return (0);
}