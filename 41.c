#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char l[400], *c;
    int i , *occ, i2, ic, check;

    printf("Inserisci la linea : ");
    fgets(l, 400 , stdin);

    occ=malloc((strlen(l)-1) * sizeof(int));
    c=malloc((strlen(l)-1) * sizeof(char));

    for(i=0, ic=0; i<strlen(l)-1; i++){
        for(i2=0; i2<strlen(l)-1; i2++){
            if(l[i]==l[i2]) occ[i]++;
        }

        for(i2=0, check=0; i2<strlen(c); i2++){
            if(l[i]==c[i2]) check=1;
        }

        if(!check){
            c[i]=l[i];
            printf("Occorrenze di '%c' : %d\n", c[i], occ[i]);
        }

    }


    return 0;
}