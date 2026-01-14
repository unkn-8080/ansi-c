#include <stdio.h>
#include <string.h>

int main(int argc,char* argvs[] ){

    char str[1000];
    int i;

    str[0]='\0';

    if(argc<2){
        printf("Errore, argomenti invalidi\n");
        return 0;
    }else{
        for(i=1; i<argc; i++) strcat(str, argvs[i]);
    }

    printf("La stringa concatenata e' : %s\n", str);

    return 0;
}