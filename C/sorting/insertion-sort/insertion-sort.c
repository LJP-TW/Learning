#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
    arr[]:
        The array that will be sorted in ascending order.
    n:
        How many elements in this array.
*/
void insertion_sort(int arr[], int n)
{
    for(int i = 1; i < n; ++i)
    {
        int pivot = arr[i];

        int j;
        for(j = i - 1; j >= 0; --j)
        {
            if(pivot < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        
        arr[j + 1] = pivot;
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

    insertion_sort(arr, 100);

    printf("sorted:\n");
    for(int i = 0; i < 100; ++i)
    {
        printf("%d ", arr[i]);
    }    
    printf("\n");
}


