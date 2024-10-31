#include <stdio.h>
int main()
{
    int n = 7;
    int prime = 0;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            prime = 1;
        }
    }
    if(prime){
        printf("%d is not prime number\n",n);
    }
    else{
        printf("%d is prime number\n");
    }
    
    return 0;
}