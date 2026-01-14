#include <stdio.h>

int main(){

    int n, inv,  i, palind, temp;

    printf("Inserisci un numero : ");
    scanf("%d", &n);

   for(inv=0, temp=n; temp>0;){
        inv= (inv*10)+(temp % 10);
        temp/=10;
   }


   if(inv==n)
        printf("Il numero e' palindromo \n");
   else
        printf("Il numero non e' palindromo \n");


    return 0;
}