#include <stdio.h>

int main(){

    int n ;

    do{
        printf("Inserisci un numero : ");
        scanf("%d", &n);
        if(!n) printf("Il numero deve essere diverso da 0!!!!!! \n\n");

    }while(!n);
    
    if(n>0){
        printf("Le cifre che compongono il numero sono  | ");
        for(; n!=0 ;){
            printf("%d | ", n%10 );
            n/=10;
        }
    }else{
        printf("Le cifre che compongono il numero sono  | ");
        n*=-1;
        for(; n!=0 ;){
            printf("-%d | ", n%10 );
            n/=10;
        }
    }

    printf("\n");

    return 0;
}