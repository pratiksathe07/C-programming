#include <stdio.h>
int main()
{
    char ch;
    printf("Enter charecter:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf(" it is upper case charecter");
    } else if (ch>='a' && ch<='z') {
        printf(" it is lower case charecter");
    }
    else{
        printf("sorry it is not charecter please enter charecter in english");
    }
    return 0;
}