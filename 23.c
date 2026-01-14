#include <stdio.h>
#include <string.h>

int main(){

    int i, i2, check, i3;
    char str[300], c, res[300];

    printf("Inserisci una stringa : ");
    scanf("%s", str);

    res[0]='\0';

    for(i=0, i3=0; i<(strlen(str)); i++){

        for(i2=0, check=0; i2<(strlen(res)); i2++){

            if(res[i2]==str[i] ) check++;

        }

        if(!check){

            res[i3]=str[i];
            i3++;
            res[i3]='\0';

        } 

    }

    printf("Stringa senza caratteri ripetuti : %s \n", res);


    return 0;
}