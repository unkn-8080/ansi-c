#include <math.h>
#include <stdio.h>

int main(){

    float a, b, c, d, square;

    printf("Inserisci la x alla seconda : ");
    scanf("%f", &a);

    printf("Inserisci la x : ");
    scanf("%f", &b);

    printf("Inserisci il termine senza x : ");
    scanf("%f", &c);

    d= (b*b) -(4*a*c);

    if(d<0){
        printf("Errore, delta inferiore a 0 \n");
    }else {
        if(a==0){
            printf("Errore, denominatore uguale a 0 \n");
        }else{
            printf("x1 = %f", (b*(-1) + sqrt(d))/ (a*2));
            printf("\nx2 = %f\n", (b*(-1) - sqrt(d))/ (a*2));
        }
        
    }

    return 0;
}