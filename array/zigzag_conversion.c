#include <stdio.h>
#define len 1000

void zigzag(char *str, char *ans, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {

        }
        else
        {
            
        }
    }
}

int main()
{
    char str[len];
    char ans[len];
    int n;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter n: ");
    scanf("%d", &n);

    zigzag(str, ans);

    return 0;
}