#include <stdio.h>

int main()
{
    int n, i;
    int arr[10000], result[10000];
    int left = 0, right, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    right = n - 1;
    pos = n - 1;

    while (left <= right)
    {
        if (arr[left] * arr[left] > arr[right] * arr[right])
        {
            result[pos] = arr[left] * arr[left];
            left++;
        }
        else
        {
            result[pos] = arr[right] * arr[right];
            right--;
        }

        pos--;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}

