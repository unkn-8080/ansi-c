#include <stdio.h>
#include <string.h>

int main(){

    char l1[200],l2[200];
    int i, i2, i3, equal;

    printf("Inserisci la stringa : ");
    fgets(l1, 200, stdin);

    printf("Inserisci la sStringa : ");
    fgets(l2, 200, stdin);

    for(i=0, equal=0; i<(strlen(l1)-1) ; i++){
        if(l1[i]==l2[0]){
            for(i2=0, i3=i, equal=1; i2<(strlen(l2)-1) && equal; i2++, i3++){
                if(l1[i3]!=l2[i2]) equal=0;
            }

        }
        
        if(equal)
            break;
    }

    if(equal)
        printf("Stringa trovata.\n");
    else
        printf("Stringa non trovata.\n");;
    

    return 0;
}