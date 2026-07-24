#include <stdio.h>

int main()
{
    int list[100];
    int n, i, key;
    int choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    printf("\n1. Linear Search");
    printf("\n2. Binary Search");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    if(choice == 1)
    {
        // Linear Search
        for(i = 0; i < n; i++)
        {
            if(list[i] == key)
            {
                printf("Element found at position %d", i + 1);
                return 0;
            }
        }
        printf("Element not found");
    }
    else if(choice == 2)
    {
        // Binary Search (List must be sorted)
        int low = 0, high = n - 1, mid;

        while(low <= high)
        {
            mid = (low + high) / 2;

            if(list[mid] == key)
            {
                printf("Element found at position %d", mid + 1);
                return 0;
            }
            else if(list[mid] < key)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        printf("Element not found");
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
