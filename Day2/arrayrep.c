#include <stdio.h>

void main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int count[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        count[i] = 1;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j] && count[i]!= 0)
            {
                count[i]++;
                count[j] = 0;
            }
        }
    }

    int repeatingCount = 0;
    // printf("Repeating elements and their counts:\n");
    for (int i = 0; i < size; i++)
    {
        if (count[i] > 1)
        {
            printf("%d appears %d times\n", arr[i], count[i]);
            repeatingCount++;
        }
    }
    if(repeatingCount == 0)
        printf("No repeating elements\n");
}

// #include <stdio.h>

// void countAndDisplayRepeatingElements(int arr[], int size)
// {
//     int count[size];
//     for (int i = 0; i < size; i++)
//     {
//         count[i] = 1;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count[i]++;
//                 count[j] = 0;
//             }
//         }
//     }

//     int repeatingCount = 0;
//     printf("Repeating elements and their counts:\n");
//     for (int i = 0; i < size; i++)
//     {
//         if (count[i] > 1)
//         {
//             printf("%d appears %d times\n", arr[i], count[i]);
//             repeatingCount++;
//         }
//     }

//     if (repeatingCount == 0)
//     {
//         printf("No repeating elements found.\n");
//     }
// }

// int main()
// {
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     countAndDisplayRepeatingElements(arr, size);

//     return 0;
// }
