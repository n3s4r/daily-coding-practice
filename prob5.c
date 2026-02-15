#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /* * DECLARATIONS 
     * ---------------------------------------------
     * RandomNumber: 1D array to store 100,000 integers.
     * CountedNumber: 2D array [10 rows][2 columns].
     * - Column 0 stores the Number (1-10).
     * - Column 1 stores the Frequency.
     */
    int RandomNumber[100000];
    int CountedNumber[10][2];
    
    // Variables for loops and sorting
    int i;                  // Loop counter
    int f;                  // Flag for sorting (0 = False, 1 = True)
    int t1_num, t2_freq;    // Temporary variables for swapping (T1, T2)
    float chance;           // To store the calculated probability
    
    // Seed the random number generator using current time
    srand(time(NULL));

    // 1. Initialize CountedNumber array
    // We set Column 0 to numbers 1-10 and Column 1 (frequency) to 0.
    for (i = 0; i < 10; i++) {
        CountedNumber[i][0] = i + 1;
        CountedNumber[i][1] = 0;
    }

    printf("Generating 100,000 random numbers... Please wait.\n");

    // 2. Generate 100,000 random integers and store in 1D array
    for (i = 0; i < 100000; i++) {
        // rand() % 10 gives 0-9. Adding 1 gives 1-10.
        RandomNumber[i] = (rand() % 10) + 1;
    }

    // 3. Calculate frequency
    // Iterate through the 1D array and update the 2D array count
    for (i = 0; i < 100000; i++) {
        int currentVal = RandomNumber[i];
        
        // Arrays are 0-indexed. If value is 1, it is at index 0.
        // We increment the frequency (Column 1)
        CountedNumber[currentVal - 1][1]++;
    }

    printf("Sorting data based on frequency...\n");

    // 4. Sort CountedNumber (Bubble Sort)
    // Adapting the provided pseudocode for DESCENDING order.
    
    f = 1; // Set Flag to TRUE (1)
    
    while (f == 1) { // WHILE F DO
        f = 0; // F <- FALSE (0)
        
        // FOR I = 0 TO 8 (checking i and i+1 requires stopping 1 early)
        for (i = 0; i < 9; i++) {
            
            // IF A[I, Frequency] < A[I + 1, Frequency]
            // We use '<' because we want Descending order (Highest first)
            if (CountedNumber[i][1] < CountedNumber[i + 1][1]) {
                
                // Swap the Numbers (Column 0)
                t1_num = CountedNumber[i][0];
                CountedNumber[i][0] = CountedNumber[i + 1][0];
                CountedNumber[i + 1][0] = t1_num;

                // Swap the Frequencies (Column 1)
                t2_freq = CountedNumber[i][1];
                CountedNumber[i][1] = CountedNumber[i + 1][1];
                CountedNumber[i + 1][1] = t2_freq;

                f = 1; // F <- TRUE
            }
        }
    }

    // 5. Output Results
    printf("\nFairness Test Results (Sorted by Frequency Descending):\n");
    printf("---------------------------------------------------\n");
    printf("Number\t| Frequency\t| Chance\n");
    printf("---------------------------------------------------\n");

    for (i = 0; i < 10; i++) {
        // Calculate chance: frequency / 100000
        // We cast to (float) to ensure decimal division occurs
        chance = (float)CountedNumber[i][1] / 100000.0;

        // Output Number, Frequency, and Chance (rounded to 4 decimals)
        printf("%d\t| %d\t\t| %.4f\n", 
               CountedNumber[i][0], 
               CountedNumber[i][1], 
               chance);
    }

    return 0;
}
