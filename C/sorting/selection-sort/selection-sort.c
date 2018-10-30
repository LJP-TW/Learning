#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
    arr[]:
        The array that will be sorted in ascending order.
    n:
        How many elements in this array.
*/
void selection_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            if(arr[j] < arr[i])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
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

    selection_sort(arr, 100);

    printf("sorted:\n");
    for(int i = 0; i < 100; ++i)
    {
        printf("%d ", arr[i]);
    }    
    printf("\n");
}


