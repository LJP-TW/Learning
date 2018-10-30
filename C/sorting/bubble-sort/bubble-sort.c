#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
    arr[]:
        The array that will be sorted in ascending order.
    n:
        How many elements in this array.
*/
void bubble_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; ++i)
    {
        for(int j = 0; j < n - i - 1; ++j)
        {
            if(arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int arr[100];

    printf("random:\n");
    for(int i = 0; i < 100; ++i)
    {
        arr[i] = rand() % 1000;
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, 100);

    printf("sorted:\n");
    for(int i = 0; i < 100; ++i)
    {
        printf("%d ", arr[i]);
    }    
    printf("\n");
}


