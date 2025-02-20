#include <stdio.h>
#include <stdlib.h>

#include "sort_recursion.h"



void sort_recur_insertion(int *arr, int last_index)
{
    if(last_index < 1) // 재귀함수 종료조건
    {
        return;
    }

    sort_recur_insertion(arr, last_index - 1); // 재귀적으로 하나씩 줄여나간다
    
    int k = 0;
    int hold = arr[last_index];

    k = _insertion(arr, last_index, hold);

    arr[k] = hold;

}


int _insertion(int *arr, int last_index, int hold)
{
    if(  ((last_index <= 0) || (arr[last_index - 1] <= hold )) )
    {
        return last_index;
    }

    arr[last_index] = arr[last_index - 1];

    return _insertion(arr, last_index -1, hold);
}







