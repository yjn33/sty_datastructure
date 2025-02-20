#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // c99 only


void arr_display(int *arr, int arr_size)
{
    for(int i = 0; i < arr_size; i += 1)
    {
        printf("%d -->", arr[i]);
    }

    printf("\n");
}


void arr_generator(int *arr, int arr_size, int down_to)
{
    int rand_num = 0;

    for(int i = 0; i < arr_size; i += 1)
    {
        while(true)
        {
            rand_num = rand();

            if(rand_num < down_to)
            {
                arr[i] = rand_num;
                break;
            }
        }
    }
    
}