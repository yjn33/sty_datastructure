#include <stdio.h>
#include <stdlib.h>

#include "graph.h"


/*
    그래프 클래스 초기화 및 메모리 주소 반환 함수

*/
GraphType *graph_init(void)
{
    GraphType *new_graph = malloc(sizeof(GraphType));
    
    if(new_graph == NULL_PTR)
    {
        printf("fail to malloc \n");
        exit(EXIT_FAILURE);
    }


    new_graph -> n = 0;
    
    for(int v = 0; v < MAX_VERTICES; v += 1)
    {
        new_graph -> adj_list[v] = NULL_PTR;
    }

    return new_graph;

}

