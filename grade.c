
// Q..write a program to printgrade as per following condition
/*
if marks between 100 and 91 : print Grade A+
if marks between 90 and 81 : print Grade A
if marks between 80 and 71 : print Grade B
if marks between 70 and 61 : print Grade C
if marks between 60 and 51 : print Grade D
if marks between 50 and 41 : print Grade E
if marks less than 40 : print you are Fail
*/

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
  
    // if (marks>100){
    //     printf("wrong input please enter marks ");
    // }
    // else if(marks<=100 && marks>=91){
    //     printf("Grade A+ \n Congratulation !!");
    // }
    // else if (marks<=90 && marks>=81){
    //     printf("Grade A\n Congratulation !!");
    // }
    // else if(marks<=80 && marks>=71){
    //     printf("Grade B \n Congratulation !!");
    // }
    // else if(marks<=70 && marks>=61){
    //     printf("Grade C\n Congratulation !!");
    // }
    // else if(marks<=60 && marks>=51){
    //     printf("Grade D \n Congratulation !!");
    // }
    // else if(marks<=50 && marks>=41){
    //     printf("Grade E\n Congratulation !!");
    // }
    // else{
    //     printf("Sorry you are fail:");
    // }
    

    // using ternary oprater:

    marks>=91&&marks<=100?printf("Grade A+"):printf("");
    marks>=81&&marks<=90?printf("Grade A"):printf("");
    marks>=71&&marks<=80?printf("Grade B"):printf("");
    marks>=61&&marks<=70?printf("Grade C"):printf("");
    marks>=51&&marks<=60?printf("Grade D"):printf("");
    marks>=41&&marks<=50?printf("Grade E"):printf("");
    marks<=40?printf("Sorry you are fail:"):printf("");

    
    return 0;
}