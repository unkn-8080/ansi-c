#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argvs[]){

    int *n, i, i2, tmp;

    if(argc<2){
        printf("Argomenti insufficienti\n");
        return 1;
    }

    n=malloc((argc-1) * sizeof(int));

    for(i=0, i2=1; i<(argc-1); i++, i2++){
        n[i]=atoi(argvs[i2]);
    }

    for(i=0; i<(argc-1); i++){
        for(i2=0; i2<(argc-1); i2++){
            if(n[i]<n[i2]){
                tmp=n[i];
                n[i]=n[i2];
                n[i2]=tmp;
            }
        }
    }

    printf("Numeri ordinati : ");

    for(i=0; i<(argc-1); i++){
        printf("%d ", n[i]);
    }

    printf("\n");

    return 0;
}