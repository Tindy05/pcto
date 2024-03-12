#include <stdio.h>

int main()
{
    int a;
    printf("inserisci un numero qualsiasi ");
    scanf(" %d" ,&a);
   int b;
   b = 2;
   int flag = 1;
   while(b < a / 2 && flag == 1)
   {
    if(a % b == 0)
    {
        flag = 0;
    }
    b++;
   }
   if(flag == 0)
   {
    printf("no é un numero primo");
   }
   else 
   {
    printf("é un numero primo");
   }
}