#include <stdio.h>
#include <string.h>

int main(){

    int i ;
    char str[300];

    printf("Inserisci una stringa : ");
    scanf("%s", str);


    for(i=((strlen(str))/2); i<(strlen(str)); i++){

        str[i]=str[i+1];
        
    }

    printf("Stringa senza carattere centrale : %s \n", str);


    return 0;
}