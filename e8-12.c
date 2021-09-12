#include <stdio.h>

// function to display an array
void displayMatrix(int rows, int cols, int matrix[rows][cols])
{
    int row, column;

    for (row = 0; row < rows; ++row)
    {
        for (column = 0; column < cols; ++column)
        {
            printf("%4i", matrix[row][column]);
        }
        printf("\n");
    }
    printf("\n");
}

// function to transpose an array
void transposeMatrix(int rows, int cols, int m[rows][cols], int n[cols][rows])
{
    int r, c;

    for (r = 0; r < rows; ++r)          // iterate through source rows
    {
        for (c = 0; c < cols; ++c)      // iterate through source columns
        {
            n[c][r] = m[r][c];
        }
    }
}

// main function
int main(int argc, char const *argv[])
{
    void displayMatrix(int rows, int cols, int m[rows][cols]);
    void transposeMatrix(int rows, int cols, int m[rows][cols], int n[cols][rows]);

    int rows = 4, columns = 5;
    int mMatrix[rows][columns] = {
                                    { 1,  2,  3,  4,  5},
                                    { 6,  7,  8,  9, 10},
                                    {11, 12, 13, 14, 15},
                                    {16, 17, 18, 19, 20},
                                 };

    int nMatrix[columns][rows];

    displayMatrix(rows, columns, mMatrix);
    transposeMatrix(rows, columns, mMatrix, nMatrix);
    displayMatrix(columns, rows, nMatrix);

    return 0;
}
