#include <stdio.h>

int sum(int ,int );  //functioon prototype...

int sum(int x ,int y ){
    printf("The sum of %d and %d is %d\n",x,y,x+y);  //function definition...
    return x+y;
}

int main()
{
    int a =3;
    int b=7;
    sum(a,b);    // function call...

    int a1=47;
    int b1=14;
    sum(a1,b1);    //function call...

    int a2=56;
    int b2=23;
    sum(a2,b2);    //function call...
    
    return 0;
}