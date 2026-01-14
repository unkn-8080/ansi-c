#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argvs[]){

    int n, i;

    if(argc<2){
        printf("Errore, argomenti invalidi\n");
        return 0;
    }

    for(i=1, n=0; i<argc; i++) n+=atoi(argvs[i]);
    
    printf("La somma dei numeri e' : %d\n", n);

    return 0;
}