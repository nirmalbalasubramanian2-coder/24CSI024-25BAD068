#include <stdio.h>

int main()
{
    int n, i;
    long long p;
    int arr[10000];
    int start = 0;
    int maxLength = 0;
    int currentLength;
    long long currentSum = 0;

    scanf("%d %lld", &n, &p);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];

        while (currentSum > p && start <= i)
        {
            currentSum = currentSum - arr[start];
            start++;
        }

        currentLength = i - start + 1;

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    printf("Max Length: %d", maxLength);

    return 0;
}
