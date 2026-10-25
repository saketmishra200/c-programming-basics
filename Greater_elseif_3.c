#include<stdio.h>

int main(){
    int a,b,c;
    printf("\nEnter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("\n%d is greater",a);
    else if(b>a && b>c)
    printf("\n%d is greater",b);
    else if(c>a && c>b)
    printf("\n%d is greater",c);
    return 0;
}