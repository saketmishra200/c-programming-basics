#include<stdio.h>

int main(){
    int n,orignal,rem,rev=0;
    printf("\nEnter the number");
    scanf("%d",&n);
      orignal=n;
    while(n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(orignal >= 0 && orignal == rev)
        printf("\n%d is palindrome",rev);
    else
        printf("\n%d is not a palindrome",rev);
    return 0;
}