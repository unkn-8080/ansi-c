#include <stdio.h>
#include <string.h>

int equal(char *pts, char *ptr);

int main(){

    int i, occ;
    char str[400], ric[400];

    printf("Inserisci una stringa : ");
    fgets(str, 400, stdin);

    printf("Inserisci una sottostringa : ");
    fgets(ric, 400, stdin);

    for(i=0, occ=0; i < strlen(str)-1; i++){
        if(str[i] == ric[0]) 
            if(equal(str + i, ric)) occ++;
    }

    printf("Nella stringa ci sono %d occorrenze della sottostringa.\n", occ);

    return 0;
}

int equal(char *pts, char *ptr){

    int i, equal;

    for(i=0, equal=1; i < strlen(ptr)-1 && i < strlen(pts)-1 && equal; i++)
        equal = (ptr[i] == pts[i]);

    return equal;
}