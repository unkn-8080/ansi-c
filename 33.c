#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char lin[400], **token;
    int i, tkn, i2;

    printf("Inserisci una linea : ");
    fgets(lin, 400, stdin);

    for(i=0, tkn=1; i<strlen(lin)-1; i++){
        if(lin[i+1]!=' ' && lin[i]==' ') tkn ++;
    }
        

    token=malloc(tkn * sizeof(char*));

    for(i=0; i<tkn; i++)
        token[i]=malloc(400 * sizeof(char));

    for(i=0, i2=0, tkn=0; i<strlen(lin)-1; i++){
        if(lin[i] != ' '){
            token[tkn][i2]=lin[i];
            i2++;
        }else if(lin[i+1]!=' '){
            token[tkn][i2] = '\0';
            tkn++;
            i2=0;
        }
    }
    token[tkn][i2] = '\0';

    for(i=0; i<=tkn; i++){
        printf("Token %d : %s\n", i+1, token[i]);
    }
        


    return 0;
}