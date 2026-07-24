#include <stdio.h>

int main()
{
    int n, i;
    int arr[10000];
    int count = 0;
    int currentOnes = 0;
    int maxOnes;
    int minSwaps;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] == 1)
        {
            count++;
        }
    }

    if (count == 0 || count == 1)
    {
        printf("Min Swaps: 0");
        return 0;
    }

    for (i = 0; i < count; i++)
    {
        if (arr[i] == 1)
        {
            currentOnes++;
        }
    }

    maxOnes = currentOnes;

    for (i = count; i < n; i++)
    {
        if (arr[i] == 1)
        {
            currentOnes++;
        }

        if (arr[i - count] == 1)
        {
            currentOnes--;
        }

        if (currentOnes > maxOnes)
        {
            maxOnes = currentOnes;
        }
    }

    minSwaps = count - maxOnes;

    printf("Min Swaps: %d", minSwaps);

    return 0;
}
