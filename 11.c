#include <stdio.h>

int main(){

    int n, c, pres;

    printf("Inserisci un numero : " );
    scanf("%d", &n);

    printf("Quale cifra vuoi controllare? : ");
    scanf("%d", &c);

    for(pres=0 ; n!=0; ){
        if(c==(n%10)) pres++;
        n/=10;
    }

    if(pres)
        printf("Cifra presente %d volta/e\n", pres);
    else
        printf("Cifra non presente \n");

    return 0;
}