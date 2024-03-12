#include <stdio.h>

int main()
{
 int a;
 int b;
 printf("inserisci numero");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
printf("il primo numero é maggiore del secondo\n");
    }
    if(a < b)
    {
        printf("il secondo numero é meggiore del primo");
    }
}