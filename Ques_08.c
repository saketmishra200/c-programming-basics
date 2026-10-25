#include<stdio.h>

int main(){
    int fact=1;
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        fact*=i;
    }
    printf("The factorial of the number %d is %d",n,fact);
    return 0;
}