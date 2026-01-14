#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, c, pres;
    char *carattere;

    do{

        printf("Inserisci un numero : " );
        scanf("%d", &n);

        printf("Quale cifra vuoi controllare?(inserisci un carattere per uscire) : ");
        scanf("%s", carattere);

        if(carattere[0]>='0' && carattere[0]<='9') {
            c=atoi(carattere);
            for(pres=0 ; n!=0; ){
                if(c==(n%10)) pres++;
                    n/=10;
            }

            if(pres)
                printf("Cifra presente %d volta/e\n", pres);
            else
                printf("Cifra non presente \n");
        }else
            printf("Carattere inserito , programma terminato \n");

    }while(carattere[0]>='0' && carattere[0]<='9');

    return 0;
}