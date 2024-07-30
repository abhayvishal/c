#include <stdio.h>
#define len 1000

int length(char *str)
{
    int cnt = 0;
    while (*str)
    {
        cnt++;
        str++;
    }
    return cnt;
}

void pattern(char *str, int n, int rows)
{
    int cnt = 0;
    int col = 0;
    for (int i = 0; i < rows; i++)
    {
        col = 0;
        int j = i;
        cnt = 0;
        while (j < n)
        {
            if ()
            {
            }
            else if ()
            {
            }
            else
            {
                printf(" ");
            }
            col++;
        }
        printf("\n");
    }
}

int main()
{
    char str[len];
    int rows;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter rows: ");
    scanf("%d", &rows);

    int n = length(str);

    pattern(str, n, rows);

    return 0;
}