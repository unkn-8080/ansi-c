#include <stdio.h>

int main(){

    int n ;

    do{
        printf("Inserisci un numero (0 per uscire): ");
        scanf("%d", &n);

        if(n){
            if(n>0){
                printf("Le cifre che compongono il numero sono  | ");
                for(; n!=0 ;){
                    printf("%d | ", n%10 );
                    n/=10;
                }
                n=1;
            }else{
                printf("Le cifre che compongono il numero sono  | ");
                n*=-1;
                for(; n!=0 ;){
                    printf("-%d | ", n%10 );
                    n/=10;
                }
                n=1;
            }
            printf("\n");
        }
        

    }while(n!=0);
    
    
    printf("Programma terminato\n");

    return 0;
}