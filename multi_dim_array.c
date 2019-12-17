
#include <stdio.h>

int main() {

    int row, col;
    printf("Enter the number of rows \n");
    scanf("%i", &row);
    printf("Enter the number of columns \n");
    scanf("%i", &col);


    // multi dimentional array is just arrays inside of arrays. So here if we have 2 rows and 3 cols
    // so, we have two arrays with 3 elements in each of them .
    // ie. matrix[2][3] => [[element1, element2, element3], [element1, element2, element3]].
    int matrix[row][col];

    int counter = 1;
    for (int i = 1; i <= row; i++) {
        for(int j = 1; j <= col; j++) {
            matrix[i][j] = counter;
            counter++;
        }
    };

    printf("Matrix has been made. \n");

    for (int i = 1; i <= row; i++) {
        for(int j = 1; j <= col; j++) {
            printf("%i\t", matrix[i][j]);
        }
        printf("\n");
    };

    // Transpose is the same matrix , just the rows become columns and columns becomes rows values.
    printf("Transpose of the matrix \n");

    for (int i = 1; i <= col; i++) {
        for(int j = 1; j <= row; j++) {
            printf("%i\t", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
