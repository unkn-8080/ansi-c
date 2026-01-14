#include <stdio.h>

int main(){

    int n;

    printf("Inserisci un numero : ");
    scanf("%d", &n);

    printf("Le cifre che compongono il numero sono : ");

    for(; n!=0 ;){
        printf("%d  ", n%10);
        n/=10;
    }

    printf("\n");

    return 0;
}