#include<stdio.h>
#include<stdlib.h>

int main(){
   int i,fact,nb;
   fact=1;
   printf("entrez le nembre nb:\n");
   scanf("%d",&nb);
   if (nb<0)
    printf("le factoriel n'est pas possible\n");
   else
   for(i=1;i<=nb;i++){
   fact*=i;
    printf("le factoriel est:%d\n",fact*i);
   }

return 0;


}

