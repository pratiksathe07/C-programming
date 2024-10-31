#include <stdio.h>

int main()
{
    // Write a program to check if given character is digit or not

    int ch;
    printf("Enter a charecter : ");
    scanf("%d",&ch);

    if(ch>=0 && ch<=9){
        printf("it is a digit charecter \n");
    }
    else{
        printf("it is not a digit charecter please enter vailid input");
    }

    return 0;
}