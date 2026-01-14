#include <stdlib.h>
#include <stdio.h>

int main(){

    int n, *vett, i, max;

    printf("Inserisci la grandezza dell'array : ");
    scanf("%d", &n);

    vett=malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        printf("(%d) Inserisci un numero : ", i+1);
        scanf("%d", &vett[i]);
    }

    max=vett[0];

    for(i=1; i<n; i++){
        if(vett[i]>max) max=vett[i];
    }

    printf("Il numero piu' grande nella sequenza e' : %d \n", max);

    return 0;
}