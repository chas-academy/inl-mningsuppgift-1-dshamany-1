#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    // Your code goes here

    // We will toss the dice 100 times
    int max_throw = 100;
    
    // We will use the indices of the statistics array to count
    // the sum of each occuance of a side of the die
    int statistics[6];

    // The sum and average variables are initialized with default
    // values to prevent undefined behavior
    int sum = 0;
    float average = 0.0;

    for (int i = 0; i < max_throw; i++) {
        // Generate a random number between 1 and 6
        int toss = (rand() % 6) + 1; // This is a shorthand

        // Add statistics - occurrances
        statistics[toss - 1] += 1;

        // Update sum
        sum += toss;
    
        // Calculate running average (convert to float for accuracy)
        average = ((float)sum / (float)max_throw);
    }
    
    // Print all occurrances
    for (int s = 0; s < 6; s++) {
        printf("%d\n", statistics[s]);
    }

    // Print the sum and average
    printf("%d\n", sum);
    printf("%.1f\n", average);
    
    return 0;
}
