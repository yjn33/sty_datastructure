#define NULL_PTR ((void*)0)
#define MAX_VERTICES 50

/*
    그래프 노드 정의
*/
typedef struct graph_node
{
    int vertex;
    struct graph_node *link;
}GraphNode;

/*
    그래프 타입 클래스 정의
*/
typedef struct graph_type
{
    int n; // 현재 정점 vertices의 개수
    GraphNode *adj_list[MAX_VERTICES];
}GraphType;




