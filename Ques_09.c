#include<stdio.h>

int main(){
    int n,i = 1,product = 1;
    printf("Enter the value");
    scanf("%d",&n);
    while (i<=n)
    {
        product*=i;
        i++;
    }
    printf("The factorial of %d is %d",n,product);
    return 0;
}