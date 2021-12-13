/*
Nam: Keshav Kumar
Roll number: CS2123
Date: 13/12/2021
Program Descrpition: Problem 7 Assignment 1
*/

#include <stdio.h>
#include <stdlib.h>

int **generate(int numRows, int **returnColumnSizes)
{
    returnColumnSizes = (int **)malloc(numRows * sizeof(int *));
    for (int i = 0; i < numRows; i++)
    {
        returnColumnSizes[i] = (int *)malloc((i + 1) * sizeof(int));
        returnColumnSizes[i][0] = 1;
        returnColumnSizes[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            returnColumnSizes[i][j] = returnColumnSizes[i - 1][j - 1] + returnColumnSizes[i - 1][j];
        }
    }
    return returnColumnSizes;
}

int main()
{
    int rows=9;
    int **re = NULL;
    re = generate(rows, re);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%-2d ", re[i][j]);
        }
        printf("\n");
    }
    return 0;
}
