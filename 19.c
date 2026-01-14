#include <string.h>
#include <stdio.h>

int main(){

    char l[300], c[3];
    int occ, i;

    printf("Inserisci una linea : ");
    fgets(l, 300, stdin);

    printf("Inserisci il carattere da ricercare : ");
    scanf("%s", c);

    for(i=0, occ=0; i<strlen(l); i++) if(c[0]==l[i]) occ++;

    if(occ)
        printf("Il carattere e' presente %d volte.\n", occ);
    else
        printf("Il carattere non e' presente.\n");

    return 404;
}