#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int i, i2;
    char *str, *inv, buffer[200];

    printf("Inserisci una stringa : ");
    scanf("%s", buffer);

    str=malloc((strlen(buffer)+1)* sizeof(char));
    inv=malloc((strlen(buffer)+1)* sizeof(char));

    strcpy(str, buffer);

    for(i=((strlen(str))-1), i2=0; i>=0; i--, i2++)  inv[i2]=str[i];

    if(strcmp(str, inv))
        printf("La stringa non e' palindroma.\n");
    else
        printf("La stringa e' palindroma.\n");;


    return 0;
}