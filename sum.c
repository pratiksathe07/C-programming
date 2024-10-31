#include <stdio.h>
int main() 
{
    int i, n,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    i=1;
    
    while(i<=n)
    {
        sum=sum+i;
        printf("\ni = %d sum= %d ", i, sum);
        i++;
    }
        

    // use of do while loop:

    //     int i=1,sum=0;
         
    // do{
    //     sum=sum+i;
    //     printf("\ni = %d sum= %d ", i, sum);
    //     i++;
    // }while(i<=9);


    // //use for loop:
    // int sum=0;
    // for ( int i = 1; i <=10; i++)
    // {
    //     sum+=i;
        
    // }
    // printf("%d\n",sum);
        return 0;
}
