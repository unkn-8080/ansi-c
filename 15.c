#include <stdio.h> 
#include <stdlib.h>

int main(){

    int grand, i, *vett, pos, ins;
    
    printf("Quanti numeri vuoi inserire ? ");
    scanf("%d", &grand);

    vett=malloc(grand * sizeof(int));

    for(i=0; i<grand; i++){
        printf("%d. Inserisci un numero : ", i+1);
        scanf("%d", &vett[i]);
    }

    printf("Quale numero vuoi inserire ? ");
    scanf("%d", &ins);

    printf("In che posizione ? ");
    scanf("%d", &pos);

    printf("Vettore originale : ");

    for(i=0; i<grand; i++){
        printf("%d ", vett[i]);
    }

    grand++;
    vett=realloc(vett, grand * sizeof(int));

    for(i=(grand-1); i>pos; i--){
        vett[i]= vett[i-1];
    }

    vett[pos]=ins;

    printf("\nVettore post-inserimento : ");

    for(i=0; i<grand; i++){
        printf("%d ", vett[i]);
    }

    printf("\n");

    return 0;
}