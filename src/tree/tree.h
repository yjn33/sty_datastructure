/*
    Title: Tree ADT Header File
    Author: yjn33 
    Date: 2025/02/22
    GitHub: https://github.com/yjn33

    이진탐색트리 추상 자료구조 헤더 파일입니다
*/


#define NULL_PTR ((void*)0) // NULL macro 명시적 구현


/*
    노드 구조체
*/
typedef struct tree_node
{
    int key; // 키
    void *data; // 제네릭 포인터 데이터
    struct tree_node *left_child;
    struct tree_node *right_child;
}TreeNode;


/*
    트리 클래스 모사를 위한 구조체
*/
typedef struct tree_type
{
    TreeNode *root; // struct tree_node *root
}TreeType;



// 프로토 타입 함수목록
TreeType *tree_init(void);
void tree_insert_node(TreeType *tree, int insert_key, void *insert_data);













