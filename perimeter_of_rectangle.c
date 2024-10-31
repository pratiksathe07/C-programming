#include <stdio.h>

int main()
{
    // Perimeter=2×(Length+Width)
    int perimeter,length,width;

    printf("Enter a length : ");
    scanf("%d",&length);

    printf("Enter a width : ");
    scanf("%d",&width);

    printf("the perimeter of rectangle with length %d and width %d is %d",length,width,2*(length+width));
    return 0;
}