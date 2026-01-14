#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i, i2, *vett, tmp;

    printf("Quanti numeri vuoi inserire ? ");
    scanf("%d", &n);

    vett=malloc(n * sizeof(int));

    for(i=0; i<n ; i++){
        printf("%d. Inserisci un numero : ", i+1);
        scanf("%d", vett+i);
    }

    printf("Vettore originale (non ordinato) : ");
    for(i=0; i<n ; i++){
        printf("%d ", vett[i]);
    }

    for(i=0; i<n; i++){
        for(i2=0; i2<(n-i-1); i2++){
            if(vett[i2]>vett[i2+1]){
                tmp=vett[i2];
                vett[i2]=vett[i2+1];
                vett[i2+1]=tmp;
            } 
        }
    }

    printf("\nVettore ordinato : ");
    for(i=0; i<n ; i++){
        printf("%d ", vett[i]);
    }

    printf("\n");

    free(vett);

    return 0;
}