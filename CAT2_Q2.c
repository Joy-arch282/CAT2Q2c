#include <stdio.h>

int main() {
    // i. Define a 2D array named scores with 2 rows and 2 columns
    int scores[2][2] = {
        {85, 90},   // Row 0
        {75, 80}    // Row 1
    };

    // ii. Print the elements of the above array using a nested for loop
    printf("Scores:\n");
    for (int i = 0; i < 2; i++) {         // Loop through rows
        for (int j = 0; j < 2; j++) {     // Loop through columns
            printf("%d ", scores[i][j]);  // Print each element
        }
        printf("\n");                      // Newline after each row
    }

    return 0;
}
