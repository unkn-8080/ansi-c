#include <stdio.h>
#include <stdlib.h>

int main(){

    char in[10] ;
    int n;

    do{
        printf("Inserisci un numero intero positivo (un carattere per uscire): ");
        scanf("%s", in);
        if(in[0]>='0' && in[0]<='9')
            n=atoi(in);
        else
            n=0;

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