#include <stdio.h>
#include <string.h>

int Cmp(char *ptl1, char *ptl2);
void Sub(char *ptl1, char *ptsos, char *ptl2);

int main(){

    char l1[400],l2[400], sos[400];
    int i, equal;

    printf("Inserisci la stringa : ");
    fgets(l1, 400, stdin);

    printf("Inserisci la sStringa da ricercare : ");
    fgets(l2, 400, stdin);

    printf("Inserisci la stringa sostitutiva : ");
    fgets(sos, 400, stdin);

    if(strlen(l2)>strlen(l1)){
        printf("errore, la sStringa non puo essere piu' lunga della stringa\n");
        return 0;
    }

    for(i=0 ; i<strlen(l1); i++){
        equal=0;

        if(l1[i]==l2[0])    equal=Cmp(l1+i, l2);
        
        if(equal!=0)   Sub(l1+i,sos, l2);

    }

    printf("Stringa modificata : %s", l1);

    return 0;
}

int Cmp(char *ptl1, char *ptl2){
    int i, equal;
    for(i=0, equal=1; i<strlen(ptl2)-1 && equal && i<strlen(ptl1)-1; i++)
        equal= (ptl1[i]==ptl2[i]);

    return equal;
}

void Sub(char *ptl1, char *ptsos, char *ptl2){
    int i, i2;

    for(i=0 ; i<strlen(ptsos)-1; i++){
            ptl1[i]=ptsos[i];
    }
    for(i+=1 ; i<strlen(ptl2)-1; i++){
        ptl1[i]=ptl1[i+1];
    }
        

}