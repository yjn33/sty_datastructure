#include <stdio.h>
#include <stdlib.h>

#include "tree.h"


/*
    클래스 new 연산자와 비슷하게 이중포인터대신 
    할당된 메모리공간을 tree type을 return 한다 
*/
TreeType *tree_init(void)
{
    TreeType *new_tree = malloc(sizeof(TreeType));
    
    if(new_tree == NULL_PTR)
    {
        printf("fail to allocation of memory \n");
        exit(EXIT_FAILURE);
    }

    // 메모리 할당 성공시
    return new_tree;
}













