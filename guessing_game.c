//Guessing Game using C Programming Language.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   const int MIN = 1;
   const int MAX = 100;
   int guess = 0;
   int guesses = 0;
   int answer = 0;

   //uses the current time as a seed
   srand(time(0));
   
   //generate a random number between MIN & MAX
   answer = (rand() % MAX) + MIN;

   do{
      printf("Enter a guess : ");
      scanf("%d", &guess);
      if(guess > answer)
      {
         printf("Too high, Try again!\n");
      }
      else if(guess < answer)
      {
         printf("Too low, Try again!\n");
      }
      else{
         printf("CORRECT GUESS, CONGRATULATIONS!\n");
      }
      guesses++;
   }while(guess != answer);

   printf("**********************\n");
   printf("Answer: %d\n", answer);
   printf("The number of guesses took : %d\n", guesses);
   printf("**********************");
 
   return 0;
}