#include <stdio.h>
    float c2f(float c);
    float c2f(float c){
        return ((c*9.0)/5.0)+32;
    }
int main() {
    float c,f;
    printf("\nEnter the value of celius");
    scanf("%f",&c);
    printf("\nThe converted value is %.2f",c2f(c));
    return 0;
}