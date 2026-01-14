#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *vett, i, elim, i2;

    printf("Quanti numeri vuoi inserire ? : ");
    scanf( " %d", &n);

    vett=malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        printf("%d. Inserisci un numero : ", i+1);
        scanf( " %d", &vett[i]);
    }

    printf("Inserisci il numero da eliminare : ");
    scanf("%d", &elim);

    printf("Array originale : ");

    for(i=0; i<n; i++) printf("%d ", vett[i]);

    printf("\nArray modificato : ");

    for(i=0; i<n; i++){
        if(vett[i]==elim){
            for(i2=i; i2<(n-1); i2++){
                vett[i2]=vett[i2+1];
            }
            n--;
            i--;
            vett=realloc(vett, n * sizeof(int));
        }
    }

    for(i=0; i<n; i++) printf("%d ", vett[i]);

    return 0;
}