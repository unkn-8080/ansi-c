#include <stdio.h>
#include <string.h>

void elim(char *ptc);

int main(){

    char str[200];
    int i, im, i2, check;

    printf("Inserisci una stringa : ");
    fgets(str, 200, stdin);

    for(i=0; i<strlen(str); i++){
        
        for(i2=0, check=0; i2<strlen(str); i2++){
            if(str[i]==str[i2] && i>i2) check++;
        }
            
        if(check){
            elim(str+i);
            i--;
        }        
            
        
    }

    printf("Stringa modificata : %s", str);

    return 0;
}

void elim(char *ptc){
    int i;

    for(i=0; i<strlen(ptc); i++)
        ptc[i]=ptc[i+1];

}