// write a program using function to print tempertature fahrenhiet to celsius...

#include <stdio.h>

float f2fc(float f);

float f2c(float f){
    printf("the temperature in celsius is %.2f of %.2f fahrehiet\n",(5.0/9.0)*(f-32),f);
}

int main()
{
    float f=87.80;
    f2c(f);
    return 0;
}