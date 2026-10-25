#include<stdio.h>

int main(){
    int a,b,result;
    printf("\nenter two numbers");
    scanf("%d %d",&a,&b);
    result = (a>b) ? 1 :(b>a ? 2   : 3);
    switch(result){
        case 1:
        printf("\n%d is greater",a);
        break;
        case 2:
        printf("\n%d is greater",b);
        break;
        case 3:
        printf("\n Both are same");
        break;
    }
    return 0;
}