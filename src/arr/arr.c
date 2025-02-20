#include <stdio.h>
#include <stdlib.h>


void arr_display(int *arr, int arr_size)
{
    for(int i = 0; i < arr_size; i += 1)
    {
        printf("%d -->", arr[i]);
    }

    printf("\n");
}