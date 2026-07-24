#include <stdio.h>

int main()
{
    int n, i;
    int arr[10000], prefix[10000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    prefix[0] = arr[0];

    for (i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", prefix[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
