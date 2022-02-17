//
// Created by 陈芷维 on 16/02/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool compare(int guess, int r);

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
    int r = rand() % max + 1; // x % 100 can make an integer from 0 to 99(which is the last two bits of a decimal)
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
