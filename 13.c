#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *vett, i, tmp, i2;

    printf("Quanti numeri vuoi inserire ? : ");
    scanf("%d", &n);

    vett=malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        printf("%d. Inserisci un numero : ", i+1);
        scanf("%d", &vett[i]);
    }

    printf("Array originale : ");

    for(i=0; i<n; i++){
        printf("%d ", vett[i]);
    }

    /*-------------------------------------------------------------------
        Parte di codice per shift a destra con stampa del vettore modificato
    */

    printf("\nShift circolare a destra : ");

    tmp=vett[n-1];

    for(i=(n-1); i>0; i--){
        vett[i]=vett[i-1];
    }

    vett[0]=tmp;

     for(i=0; i<n; i++){
        printf("%d ", vett[i]);
    }

    /*-------------------------------------------------------------------
       Fine di : Parte di codice per shift a destra con stampa del vettore modificato
    */


     /*-------------------------------------------------------------------
        Parte di codice per shift a sinistra con stampa del vettore modificato
    */

    printf("\nShift circolare a sinistra : ");

    /*
        Per lo shift a sinistra eseguo due volte il ciclo, il primo per far tornare l'array
        alla disposizione originale, il secondo per shiftare a sinistra gli elementi originali
    */


    for(i2=0; i2<2; i2++){
        tmp=vett[0];

        for(i=0; i<(n-1); i++){
            vett[i]=vett[i+1];
        }

        vett[n-1]=tmp;

        
    }
    
    for(i=0; i<n; i++)
        printf("%d ", vett[i]);


    /*-------------------------------------------------------------------
       Fine di : Parte di codice per shift a sinistra con stampa del vettore modificato
    */

    free(vett);
    printf("\n");
    
    return 0;
}