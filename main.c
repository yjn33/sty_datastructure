#include <stdio.h>
#include <stdlib.h>

#include "sort_recursion.h"
#include "arr.h"



int main(void)
{

    int a[7] = {8,1,9,3,4,0,8};

    arr_display(a, 7);

    sort_recur_insertion(a, 6);

    arr_display(a, 7);




    return 0;
}