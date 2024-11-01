// write a program using function to print tempertature celsius to fahrenhiet...

#include <stdio.h>

float c2f(float c);

float c2f(float c){
    printf("the temperature in fahrehiet is %.2f of %.2f celsius\n",(9.0/5.0)*c+32,c);
}

int main()
{
    float c=31;
    c2f(c);
    return 0;
}