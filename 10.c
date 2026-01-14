#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n, i;
    char *bin, r[3];

    bin=malloc(0 * sizeof(char));

    printf("Inserisci un numero decimale : ");
    scanf("%d", &n);

    printf("Il numero convertito in binario e' : ");

    for(i=1 ; n!=0 ; i++){
        bin=realloc(bin, i * sizeof(char));
        sprintf(r, "%d", n%2);
        strcat(bin, r);
        n/=2;
    }

    for(i=strlen(bin)-1 ; i>=0 ; i--){
        printf("%c", bin[i]);
    }

    printf("\n");

    return 0;
}