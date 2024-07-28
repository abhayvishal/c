#include <stdio.h>

void printSubsequence(int arr[], int start, int end, int subseq[], int subseq_size)
{
    // Print the subsequence
    for (int i = 0; i < subseq_size; i++)
    {
        printf("%d ", subseq[i]);
    }
    printf("\n");
}

void generateSubsequences(int arr[], int start, int end, int subseq[], int subseq_size)
{
    // Print the subsequence if it's not empty
    if (subseq_size > 0)
    {
        printSubsequence(arr, start, end, subseq, subseq_size);
    }

    // Generate subsequences including or excluding each element
    for (int i = start; i < end; i++)
    {
        subseq[subseq_size] = arr[i];                                   // Include arr[i] in the subsequence
        generateSubsequences(arr, i + 1, end, subseq, subseq_size + 1); // Recursively generate subsequences
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int subseq[n]; // Array to store the current subsequence

    // Generate all subsequences
    generateSubsequences(arr, 0, n, subseq, 0);

    return 0;
}
