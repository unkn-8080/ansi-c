#include <stdlib.h>
#include <stdio.h>

int main(){

    int n, *vett, i, media;

    printf("Inserisci la grandezza del vettore : ");
    scanf("%d", &n);

    vett=malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        printf("(%d) Inserisci un numero : ", i+1);
        scanf("%d", vett+i);
    }

    for(i=0, media=0; i<n; i++){
        media+= vett[i];
    }

    media=media/n;

    printf("La media e' :  %d \n", media);

    free(vett);

    return 0;
}