#include <stdio.h>

int main(){

    int n , temp, inv ;

    do{

        printf("Inserisci un numero (0 per uscire): ");
        scanf("%d", &n);

        for(temp=n, inv=0; temp>0;){
            inv= (inv*10)+(temp %10);
            temp/=10;
        }

        if(inv==n) 
            printf("Il numero e' palindromo\n");
        else
            printf("Il numero non e' palindromo\n");

    }while(n!=0);

    printf("Programma terminato\n");

    return 0;
}