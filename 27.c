#include <stdio.h>
#include <string.h>

int main(){

    int i;

    char str[200], tmp[4];

    printf("Inserisci la stringa : ");
    fgets(str, 200, stdin);

    for(i=0; i<(strlen(str)/2); i++){
            tmp[0]=str[i];
            str[i]=str[strlen(str)-2-i];
            str[strlen(str)-2-i]=tmp[0];
        
    }

    printf("La stringa invertita e' : %s", str);

    return 0;
}