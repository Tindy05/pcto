#include <stdio.h>

int main()
{
    int arr[7] = { 9 , 8 , 78 , 2 ,89 , 78, 6444444};
    int b = 0;
    int c = 0;
    int tmp;
    while ( b < 7 )
    {
        c = b + 1;    
        while ( c < 7)
        {
            if(arr[b] > arr[c])
            {
                tmp =  arr[c];
                arr[c] = arr[b];
                arr[b] = tmp;
            }
            c = c + 1;
        }      
        b = b + 1;
    }
    b = 0;
    while( b < 7)
    {
        printf("%d\n", arr[b]);
        b++;
    }
}
