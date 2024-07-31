#include <stdio.h>

void print(int start, int n, char *s, char *ans, int cnt0, int depth, int *index)
{
    if (cnt0 == 2 * n)
    {
        for (int i = 0; i < depth; i++)
        {
            printf("%c", ans[i]);
        }
        printf("\n");
        return;
    }
    for (int i = start; i < 2; i++)
    {
        ans[depth] = s[i];

        if (cnt0 < n)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }
        print(start, n, s, ans, cnt0 + 1, depth + 1, index);
    }
}

int main()
{
    int n;
    char s[2];
    s[0] = '(';
    s[1] = ')';
    int cnt0 = 0;

    int index = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    char ans[n * 2];

    print(0, n, s, ans, cnt0, 0, &index);

    return 0;
}