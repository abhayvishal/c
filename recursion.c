#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    for (int i = 0; i <= 3; i++)
    {
        for (int j = i + 1; j <= 3; j++)
        {
            for (int k = j + 1; k <= 3; k++)
            {
                if (i >= 3)
                    printf("%d", arr[i]);
                if (j >= 3)
                    printf("%d", arr[j]);
                if (k >= 3)
                    printf("%d", arr[k]);
            }
        }
    }
    return 0;
}