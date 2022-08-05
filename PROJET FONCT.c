#include <stdio.h>
#include <stdlib.h>

int factorielle(int x)
{
    int fact,i;
    fact=1;
    for(i=2;i<=x;i++)
        fact*=i;
    return fact;
}
int main()
{


int nb;
do{
    printf("entrez un nombre puor calculer la factorielle\n");
    scanf("%d",&nb);
}while(nb<0);
printf("la factorielle de %d!=%d\n",nb,factorielle(nb));
}
