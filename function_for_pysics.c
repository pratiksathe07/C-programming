// write a pragram using function to calculate force act on body with gravitational force is 9.8m/s*s

#include <stdio.h>

float force(float);

float force(float mass){
    printf("The for act on body is %.2f newton\n",mass*9.8);
}

int main()
{
    float mass = 54;
    force(mass);
    return 0;
}