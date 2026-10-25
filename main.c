#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    srand((0));

    int randomnumber = (rand()%100) + 1;
    int no_of_guesses =0;
    int guessed;

    do{
        printf("\nGuess the number");
        scanf("%d",&guessed);
        if (guessed>randomnumber)
        {
            printf("/nLower Number Please!");
        }
        else if(guessed<randomnumber){
            printf("/nHigher Number Please!");
        }
        else{
            printf("\nCongrats!");
        }
        no_of_guesses++;
    }while(randomnumber!=guessed);

    printf("You guessed the number in %d guesses",no_of_guesses);
    return 0;
}