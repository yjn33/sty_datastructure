#include <stdio.h>
#include <stdlib.h>

#include "sort.h"



void sort_insertion(int *arr, int arr_size)
{
    int hold, k;

    for(int i = 0; i < arr_size; i++)
    {
        hold = arr[i];

        for(k = i; (k > 0) && (arr[k - 1] > hold); k -= 1)
        {
            arr[k] = arr[k - 1];
        }

        arr[k] = hold;
    }

}

