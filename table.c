#include <stdio.h>
int main() 
{
    int i,n;
    printf("enter number: ");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("%d X %d = %d \n",n,i,n*i);
        i++;
    }
        return 0;
}