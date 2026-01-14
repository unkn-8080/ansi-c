#include <stdio.h>
#include <string.h>

int Cmp(char* ptl, char* pts);

int main(){

    int i, equal;
    char str[200],lin[200];

    printf("Inserisci una linea : ");
    fgets(lin, 200, stdin);

    printf("Inserisci la stringa da rimuovere : ");
    scanf("%s", str);

    if(strlen(str)>(strlen(lin)-1)) {
        printf("Errore, la stringa non puo' essere piu lunga della linea\n");
        return 0;
    }


    for(i=0 ; i<strlen(lin)-1; i++){

        equal=0;

        if(lin[i]==str[0]) equal=Cmp(lin+i,str);

        if(equal) {
            strcpy(lin+i , lin + i + strlen(str));
            i--;
        }

    }

    printf("Stringa modificata  : %s\n", lin);

    return 0;
}

int Cmp(char* ptl, char* pts){
    int i, equal;

    for(i=0, equal=1; i<strlen(pts) && equal ; i++)
        equal= (ptl[i]==pts[i]);

    return equal;
}