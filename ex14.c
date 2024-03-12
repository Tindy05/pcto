#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("inserisci due numeri");
    scanf(" %d, %d", &a, &b);
    if(a%b == 0)
    {
        printf("il numero é multiplo ");
    }
    else {
        printf("non é multiplo");
    }
}