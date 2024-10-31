#include <stdio.h>
int main()
{
    // 1.inpute from user
    int r,h;
    printf("Enter the Radius of cylinder\n");
    scanf("%d",&r);
    printf("Enter The height of cylinder\n");
    scanf("%d",&h);
    printf("The Area of cylinder is %f\n",3.14*r*r*h);
    

    // // 2.input in code
    // int r=6,h=10;
    // printf("The area of cylinder with radius %d and height %d is %f\n",r,h,3.14*r*r*h);
    return 0;
}