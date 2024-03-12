#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d" ,&a ,&b ,&c);
    if ( a + b > c )
    {
        printf("é un triangolo");
    }
    else if ( a + c > a )
    {
printf("é un triangolo");
    }
    else if ( b + c > a)
    {
        printf("é un triangolo");
    }
    else
    {
        printf("non é un triangolo");
    }
}