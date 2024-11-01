#include <stdio.h>

int div(int,int);  // function prototype....

int div(int a ,int b ){
    printf("The divison of %d and %d is %d\n",a,b,a/b);  //funtion definition...
}
int main()
{
    int x=7;
    int y=2;
    div(x,y); //funtion call... 

    int x1=36;
    int y1=9;
    div(x1,y1);  //funtion call...

    int x2=55;
    int y2=5;
    div(x2,y2);   //funtion call...
    
    return 0;
}