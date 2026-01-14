#include <malloc.h>
#include <stdio.h>

int main(){

    int n, *vett, pos, n2, i, i2;

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

    printf("\n");

    printf("Quanti numeri vuoi aggiungere ? : ");
    scanf("%d", &n2);

    printf("Da quale posizione vuoi aggiungerli ? : ");
    scanf("%d", &pos);

    vett=realloc(vett,(n+n2) * sizeof(int));

    for(i=0; i<n2; i++){
        for(i2=n+i; i2>(pos); i2--)
            vett[i2]=vett[i2-1];
    }

    for(i=0; i<n2; i++){
        printf("Inserisci un numero da aggiungere : ");
        scanf("%d", &vett[pos+i]);
    }

    printf("Array modificato : ");

    for(i=0; i<(n+n2); i++){
        printf("%d ", vett[i]);
    }

    return 0;
}