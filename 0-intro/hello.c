#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//#include <printf.h>

bool compare(int guess, int r);

double fun(int i) {
    volatile double d[1] = {3.14};
    volatile long int a[2];
    a[i] = 1073741824; /* Possibly out of bounds */
    return d[0];
}


int main() {
    int max = 100;
    int try_num = 7;
    /**
     * 1. print the rules
     */
    printf("Let us play the \"Guess Number\" game.\n"
           "The computer will give a random integer between 1 and the max number: %d \n"
           "You have no more than %d tries.\n", max, try_num);
    /**
     * 2. generate a random number (name: r)
     */
    srand(time(NULL));
    int r = rand() % max + 1;
//    printf("r = %d", r);
     /**
      * 3. ask the player to input a guess (name: guess)
      */
    /**
     * 4. get the guessed number, compare _guess with _r
     */
    int guess;
    while (try_num > 0) {
        if (compare(guess, r)) {
            return 0;
        }
        try_num--;
        printf("You still have %d tries.\n", try_num);
    }
    printf("Sorry, game over.\n");
    return 0;


//    printf("\nyour guess is: %d", guess);
//    printf("%f\n",fun(0));
//    printf("%f\n",fun(2));
//    printf("hello!");
}

bool compare(int guess, int r) {
    printf("Please input your guess: ");
    scanf("%d", &guess);
    if (guess == r) {
        printf("That's it! You are the winner.\n");
        return true;
    } else if (guess < r) {
        printf("The guess is less than the magic number.\n");
    } else {
        printf("The guess is greater than the magic number.\n");
    }
    return false;
}

