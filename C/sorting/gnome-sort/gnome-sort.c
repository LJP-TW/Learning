#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
    arr[]:
        The array that will be sorted in ascending order.
    n:
        How many elements in this array.
*/
void gnome_sort(int arr[], int n)
{
    for(int i = 0; i < n;)
    {
        if(i == 0 || arr[i - 1] <= arr[i])
        {
            ++i;
        }
        else
        {
            int t = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = t;

            --i;
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

    gnome_sort(arr, 100);

    printf("sorted:\n");
    for(int i = 0; i < 100; ++i)
    {
        printf("%d ", arr[i]);
    }    
    printf("\n");
}


