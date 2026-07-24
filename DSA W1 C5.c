#include <stdio.h>

int main()
{
    int n, k, i;
    int arr[10000];
    int deque[10000];
    int front = 0;
    int rear = -1;

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        while (rear >= front && arr[deque[rear]] <= arr[i])
        {
            rear--;
        }

        rear++;
        deque[rear] = i;

        if (deque[front] < i - k + 1)
        {
            front++;
        }

        if (i >= k - 1)
        {
            printf("%d", arr[deque[front]]);

            if (i < n - 1)
            {
                printf(" ");
            }
        }
    }

    return 0;
}
