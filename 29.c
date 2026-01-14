#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shiftSx(int *n, int in);

int main(){

    char lin[600], *token;
    int n[600];
    int i , in, i2;

    printf("Inserisci gli interi separati da spazio \n>>> ");
    fgets(lin, 600, stdin);

    token = strtok(lin, " ");

    for(i=0, in=0 ; token != NULL; i++){

        

        if(!(token[0]=='0')){
            n[in]= atoi(token);
            in++;
        }  

        token = strtok(NULL, " ");

    }

    for(i=0; i<=in; i++){
        for(i2=i+1; i2<in; i2++)
            if(n[i2]==n[i] ) {
                shiftSx(n+i, in);
                in--;
                i2--;
            }
    }

    printf("Stringa senza zeri e interi ripetuti : ");

    for(i=0; i<in; i++){

        printf("%d ", n[i]);
    } 

    printf("\n");

    return 0; 
}

void shiftSx(int *n, int in ){
    int i;

    for(i=0; i<=in; i++){
        n[i]=n[i+1];
    }
}