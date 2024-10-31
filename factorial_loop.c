#include <stdio.h>
int main()
{
    int product = 1;
    for (int i = 1; i <= 5; i++)
    {
        product*=i;
       
    }
    printf("the factorial is %d",product);

    return 0;
} 