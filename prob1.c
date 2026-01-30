#include <stdio.h>
#include <string.h>

int main() {
    // Defines a character array for 5 letters + 1 for the null terminator (\0)
    char targetWord[6]; 
    char guessWord[6];
    char letterGuess;
    int maxGuesses = 10;
    int hasWon = 0; // Acts as a boolean flag (0 = false, 1 = true)
    int i, j;

    // --- Part 1: Player 1 Input ---
    printf("--- PLAYER 1 ---\n");
    printf("Enter a 5-letter word: ");
    // %5s ensures we only take 5 characters to prevent buffer overflow
    scanf("%5s", targetWord);

    // "Clear" screen by printing newlines so Player 2 doesn't see the word
    for(i = 0; i < 50; i++) {
        printf("\n");
    }

    printf("Game Ready! Player 2, start guessing.\n");

    // --- Part 2: Player 2 Game Loop ---
    for (i = 0; i < maxGuesses; i++) {
        printf("\n--- Turn %d of %d ---\n", i + 1, maxGuesses);

        // 1. Enter one letter
        printf("Enter a single letter: ");
        // Note the space before %c (" %c"). This tells C to skip any 
        // leftover newlines in the buffer from previous inputs.
        scanf(" %c", &letterGuess);

        // 2. Check if letter is in array and output index
        int found = 0;
        for (j = 0; j < 5; j++) {
            if (targetWord[j] == letterGuess) {
                printf("Yes! '%c' is in index %d\n", letterGuess, j);
                found = 1;
            }
        }

        if (found == 0) {
            printf("Sorry, '%c' is not in the word.\n", letterGuess);
        }

        // 3. Free Guess at the whole word
        printf("Make your free guess at the whole word: ");
        scanf("%5s", guessWord);

        // strcmp checks if strings are identical. Returns 0 if they are equal.
        if (strcmp(targetWord, guessWord) == 0) {
            printf("\n*** CORRECT! YOU WIN! ***\n");
            hasWon = 1;
            break; // Break out of the loop immediately
        }
    }

    // --- Part 3: Lose Condition ---
    if (hasWon == 0) {
        printf("\nYou have used all %d turns.\n", maxGuesses);
        printf("GAME OVER. The word was: %s\n", targetWord);
    }

    return 0;
}
