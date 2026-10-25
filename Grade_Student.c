/*
Write a program to find grade of a student given his marks based on below: 
90 – 100 => A 
80 – 90 => B 
70 – 80 => C 
60 – 70 => D 
50 – 60 => E 
<50     => F */
#include<stdio.h>

int main(){
    char grade;
    printf("Enter your marks");
    scanf("%d",&grade);

    if(grade>=90 && grade<=100){
        printf("Your grade is A");
    }
    else if(grade>=80 && grade<=90){
        printf("Your grade is B");
    }
    else if(grade>=70 && grade<=80){
        printf("Your grade is C");
    }
    else if(grade>=60 && grade<=70){
        printf("Your grade is D");
    }
    else if(grade>=50 && grade<=60){
        printf("Your grade is E");
    }
    else if(grade<=50){
        printf("Your grade is F");
    }

    return 0;
}
