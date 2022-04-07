#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(){
    char aux[MAX];
    int num;
    printf("cuantos nombres desea ingresar?\n");
    scanf("%d", &num);
    getchar();
    char *v[num];

    for (int i = 0; i < num; i++)
    {
        printf("Ingrese el nombre: \n");
        gets(aux);
        v[i]= (char *) malloc(strlen(aux)*sizeof(char));
        strcpy(v[i], aux);
    }

    for (int i = 0; i < num; i++)
    {
        printf("el nombre es: \n");
        puts(v[i]);
    }

    for (int i = 0; i < num; i++)
    {
        free(v[i]);
    }

    return (0);
}