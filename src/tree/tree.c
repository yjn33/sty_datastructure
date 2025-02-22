/*
    Title: Tree ADT
    Author: yjn33 
    Date: 2025/02/22
    GitHub: https://github.com/yjn33

    이진탐색트리 추상 자료구조 구현입니다

    ASCII 문자열 호환으로 인해 printf함수인자는 영문으로 작성하였습니다
    미숙한 영작 실력에 많은 양해바랍니다
*/


#include <stdio.h>
#include <stdlib.h>

#include "tree.h"


// private 함수 프로토타입
static TreeNode *_create_node(int insert_key, void *insert_data);



/*
    TreeType 구조체 초기화 함수

    클래스 new 연산자와 비슷하게 이중포인터를 사용하는 것 대신
    할당된 TreeType 메모리 공간을 초기화하여 L-value에 return 한다
    
    주의: L-value 없이 해당 함수 호출시 할당 메모리가 discard되어지지 않아 
    memory leak 발생 가능성이 있다 (C언어는 가비지 컬렉터 기능이 없음)
*/
TreeType *tree_init(void)
{
    TreeType *new_tree = malloc(sizeof(TreeType));
    
    // 메모리 할당 실패시 -> heap 공간 부족
    if(new_tree == NULL_PTR)
    {
        printf("fail to allocation of memory \n");
        exit(EXIT_FAILURE);
    }

    // 메모리 할당 성공시
    new_tree -> root = NULL_PTR;
    return new_tree;
}


/*
    private function static
    

*/
static TreeNode *_create_node(int insert_key, void *insert_data)
{
    TreeNode *new_node = malloc(sizeof(TreeNode));
    
    // 메모리 할당 실패시 -> heap 공간 부족
    if(new_node == NULL_PTR)
    {
        printf("fail to allocation of memory \n");
        exit(EXIT_FAILURE);
    }

    // 메모리 할당 성공시
    new_node -> key = insert_key;
    new_node -> data = insert_data;
    return new_node;
}


/*
    TreeType에 제네릭 데이터를 삽입하는 함수
    

*/
void tree_insert_node(TreeType *tree, int insert_key, void *insert_data)
{
    TreeNode *p, *curr, *new_node;
    p = curr = new_node = NULL_PTR;

    curr = tree -> root;

    // 적재할 키 위치 선정 curr이 NULL이면 검색을 중단한다
    while(curr)
    {
        // 중복키 방지
        if(insert_key == (curr -> key))
        {
            printf("Not allow duplicated key \n");
            return NULL_PTR;
        }

        else
        {
            p = curr; // 순차논리회로 원리 -> 마지막 처리 노드 주소 기억

            // 삽입키가 현재 노드 키보다 작을 경우
            if(insert_key < (curr -> key))
            {
                curr = curr -> left_child;
            }

            // 삽입키가 현재 노드 키보다 큰 경우
            else // (insert_key > (curr -> key))
            {
                curr = curr -> right_child;
            }
        }
    }

    // 노드 생성
    new_node = _create_node(insert_key, insert_data);

    // curr의 부모 노드가 존재할경우
    if(p)
    {
        if(insert_key < (p -> key))
        {
            p -> left_child = new_node;
        }

        else
        {
            p -> right_child = new_node;
        }
    }
    // root가 NULL이면 새로운 노드는 root가 된다
    else
    {
        tree -> root = new_node;
    }

}













