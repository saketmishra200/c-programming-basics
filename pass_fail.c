#include<stdio.h>

int main(){
    int sub_1,sub_2,sub_3;
    float total;
    printf("\nEnter the marks of subject 1:");
    scanf("%d",&sub_1);
    printf("\nEnter the marks of subject 2:");
    scanf("%d",&sub_2);
    printf("\nEnter the marks of subject 3:");
    scanf("%d",&sub_3);
    printf("The marks obtained are %d %d and %d",sub_1,sub_2,sub_3);

    if(sub_1<33 || sub_2<33 || sub_3<33){
        printf("\nYou are failed due to less marks in individual subjects");
    }
    else if((sub_1+sub_2+sub_3)/3 <40){
        printf("\nYou are failed due to less percentage");
    }
    else{
        printf("\nYou are passed!");
    }
    return 0;
}   
