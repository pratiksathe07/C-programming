#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(age>18){
        printf("you can drive and also vote\n");
    }
    else{
        printf("you can not drive and also vote\n");
    }
    printf("Thank you\n");
    return 0;
}