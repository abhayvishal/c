/*  3. Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search for substring like “too” in the two dimensional string both from left to right and from top to bottom.

w    e    L    C    O
M    E    T    O    Z
O    H    O    C    O
R    P    O    R    A
T    I    O    n

And print the start and ending index as Start index : <1,2> End index: <3, 2>
 */
#include <stdio.h>

#define rows 100
#define cols 5

int main()
{
    char mat[rows][cols];

    int row = 0;
    int col = 0;
    char ch;

    printf("Enter the string: ");
    while (1)
    {
        ch = getchar();

        if (ch == '\n')
        {
            break;
        }

        mat[row][col] = ch;
        col++;

        if (col == cols)
        {
            row++;
            col = 0;
        }
    }

    printf("Character entered: \n");
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%c ", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}