#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *vett, i, i2, tmp, nshift;

    printf("Quanti numeri vuoi inserire ? : ");
    scanf("%d", &n);

    
    vett=malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        printf("%d. Inserisci un numero : ", i+1);
        scanf("%d", &vett[i]);
    }

    printf("Quanti shift vuoi eseguire? : ");
    scanf("%d", &nshift);

    printf("Array originale : ");

    for(i=0; i<n; i++){
        printf("%d ", vett[i]);
    }

    printf("\nShift circolare a destra : ");

    for(i2=0; i2<nshift; i2++){

        tmp=vett[n-1];

        for(i=(n-1); i>0; i--){
            vett[i]=vett[i-1];
        }

        vett[0]=tmp;
    }

    for(i=0; i<n; i++)
        printf("%d ", vett[i]);
    


    printf("\nShift circolare a sinistra : ");


    for(i2=0; i2<(nshift*2); i2++){
        tmp=vett[0];

        for(i=0; i<(n-1); i++){
            vett[i]=vett[i+1];
        }

        vett[n-1]=tmp;
    }
    
    for(i=0; i<n; i++)
        printf("%d ", vett[i]);


    free(vett);
    printf("\n");
    
    return 0;
}