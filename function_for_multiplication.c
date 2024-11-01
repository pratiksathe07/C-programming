#include <stdio.h>

int mult(int , int);  // function prototype...

int mult(int n,int m){
    printf("The multiplication of %d and %d id  %d\n",n,m,n*m);   // funtiion definition...
}
int main()
{
    int a=3;
    int b=4;
    mult(a,b);  // funtion call...

    int a1=12;
    int b1=3;
    mult(a1,b1);  // funtion call...

    int a2=13;
    int b2=4;
    mult(a2,b2);  // funtion call...
    
    return 0;
}