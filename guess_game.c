#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h> // incluse header for using random numbers

int main(){

const int MIN = 1;
const int MAX = 100;
int guess;
int tries = 1; 
// for incrementing to work we need to intialize he variable (assign a value to it)
int answer;

srand(time(0));
answer = rand() % MAX + MIN; // generates random number between 1 - 100
printf("%d\n", answer);
do{
    printf("Enter a guess: \n");
    scanf("%d", &guess);
    if(guess > answer){
        printf("Too high\n");
    }
    else if(guess < answer){
        printf("Too low\n");
    }
    else if(guess == answer){
        printf("correct!\n");
    }
    tries++;
}while(guess != answer);
printf("answer: %d\n", answer);
printf("no. of tries: %d\n", tries);
return 0;
}