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