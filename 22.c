#include <stdio.h>
#include <string.h>

int main(){

    char str[300], c[4];
    int i, occ;

    printf("Inserisci una stringa : ");
    scanf("%s", str);

    printf("Quale carattere bisogna ricercare ed eliminare ? : ");
    scanf("%s", c);

    for(i=0, occ=0; i<(strlen(str)); i++) if(c[0]==str[i]) occ++;

    if(occ)
        printf("Il carattere e' presente %d volta/e.\n", occ);
    else
        printf("Il carattere non e' presente.\n");

    return 0;
}