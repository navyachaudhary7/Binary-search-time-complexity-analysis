#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // For QueryPerformanceCounter
#include <stdint.h>

void sort_array(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binary_search(int *arr, int target, int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (target < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int n, element;
    int *arr;
    LARGE_INTEGER start, end, freq;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Fill with increasing numbers (best case for binary search)
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    QueryPerformanceFrequency(&freq); // Get clock frequency
    QueryPerformanceCounter(&start);  // Start timer

    int index = binary_search(arr, element, n);

    QueryPerformanceCounter(&end);    // End timer

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found.\n");

    // Convert time to nanoseconds
    double time_taken_ns = ((double)(end.QuadPart - start.QuadPart) * 1e9) / freq.QuadPart;
    printf("Time taken: %.2f nanoseconds\n", time_taken_ns);

    free(arr);
    return 0;
}











