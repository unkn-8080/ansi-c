#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *occ, i, *vett, grand, i2, *res, ires, check;

    printf("Inserisci i numeri in formato libero(EOF ctrl+d per terminare) : \n");

    for(i=0; printf(">>> ") && scanf("%d", &n)==1; i++){
        if(!i){
            vett=malloc((i+1) * sizeof(int));
            vett[i]=n;
        }else{
            vett=realloc(vett,(i+1) * sizeof(int));
            vett[i]=n;
        }
    }

    grand=i+1;
    occ=malloc(grand * sizeof(int));
    res=malloc(grand * sizeof(int));

    for(i=0, ires=0; i<grand; i++){
        for(i2=0 ; i2<grand; i2++)
            if(vett[i]==vett[i2]) occ[i]++;
        
        for(i2=0 ,check=1; i2<ires && check; i2++)
            if(vett[i]==res[i2]) check=0;

        if(check){
            res[ires]=vett[i];
            ires++;
        } 
    }

    printf("\nLe occorrenze sono : \n");

    for(i=0; i<(ires-1); i++){
        printf(">>> %d. Occorrenze di %d : %d\n", i+1, res[i], occ[i]);
    }

    free(vett);
    free(occ);
    free(res);
    

    return 0;
}