#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"1. What is the chemical symbol for gold?", \
    "2. Which river is the longest in the world?", 
    "3. What year did the United States declare its independence?", 
    "4. In which sport would you perform a slam dunk?", 
    "5. What is the largest mammal in the world?"};

    char options[][100] = {"A. Ag", "B. Au", "C. Fg", "D. Jg", 
    "A. Bile", "B. Cile", "C. Nile", "D. Dile", 
    "A. 1997", "B. 1967", "C. 1776", "D. 1980",
    "A. Football", "B. Handball", "C. Cricket", "D. Basketball",
    "A. blue whale", "B. Au", "C. Fg", "D. Jg"};

    char answers[5] = {'A', 'C', 'C', 'D', 'A'}; // always use single quotes for single characters
    // the answers are not 2D arrays as the the elements are single characters
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;
    printf("QUIZ GAME\n");


    for(int i = 0; i < numberOfQuestions; i++)
    {
        printf("%s\n", questions[i]);
        for(int j = (i * 4); j < ((i * 4) + 4); j++)
        // for first outer loopiteration i = 0 hence j = 0 and end of j is 4 - rsults in options for the questions being printed
        // for second outer loop iteration i = 1 hence j = 4 and end of j is 8
        {printf("%s\n", options[j]);}

    printf("Guess: "); // still within outer for loop
    scanf(" %c", &guess); // extra space before to clear \n input buffer

    guess = toupper(guess);
    

    if (guess == answers[i]) // still within outer for loop
    {
        printf("Correct\n");
        score++;
    }
    else {
        printf("Incorrect\n");
    }
    }
    
    
   printf("Final score: %d/%d\n", score, numberOfQuestions);
    
    return 0;
}