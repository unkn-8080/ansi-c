#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(){

    char str[200], *conc;
    int n, i;

    conc=malloc((n*200) * sizeof(char));

    printf("Quante stringhe vuole inserire ? : ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("%d. Stringa : ", i+1);
        scanf("%s", str);
        strcat(conc, str);
    }

    printf("Stringhe concatenate : %s\n", conc);

    return 0;
}