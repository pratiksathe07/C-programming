#include <stdio.h>
int main()
{
    // 1. input from user
    float t,r,pa; //t:time in years,pa:principle amount,r:rate of interest.
    printf("Enter principle amount\n");
    scanf("%f",&pa);
    printf("Enter time in years\n");
    scanf("%f",&t);
    printf("Enter rate of interest\n ");
    scanf("%f",&r);
    printf("The simple interest is %f",(t*r*pa)/100);
    
    
    // // 2. input is in code
    // float t=1,r=10.0,pa=10000;  // t:time in years , r:rate of interest , pa:principle amount .
    // printf("The simple interest is %f",(t*r*pa)/100);
    return 0;
}