/*Escreva uma função potencia(base, expoente) que, quando chamada, retorna base elevado no expoente.
*/
#include <stdio.h>
#include <math.h>

int func(int b,int e){
int r=1,c;


for (c=0;c<e;c++){
r=r*b;
}
return r;}

int main(){
int b,e,re;

printf("inf. a base: ");
scanf("%d",&b);
printf("inf. o expoente: ");
scanf("%d",&e);

re=func(b,e);

printf("o resultado e: %d",re);

    return 0;
}