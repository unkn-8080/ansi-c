#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int n, i, i2, *cnt;
    char buffer[1000], **vett;

    printf("Quante stringhe vuoi inserire ? : ");
    scanf("%d", &n);

    vett=malloc(n * sizeof(char*));
    cnt=malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        printf("%d. Inserisci la stringa : ", i+1);
        scanf("%s", buffer);
        vett[i]=malloc((strlen(buffer)+1) * sizeof(char));
        strcpy(vett[i], buffer);
    }

    for(i=0; i<n; i++){
        strcpy(buffer, vett[i]);
        for(i2=0; i2<n; i2++){
            if(!(strcmp(buffer, vett[i2]))) cnt[i]++;
        }
    }

    printf("Le ocorrenze sono : \n");

    for(i=0; i<n; i++){
        printf("%d. %s : %d\n", i+1,vett[i], cnt[i]);
    }

    return 0;
}