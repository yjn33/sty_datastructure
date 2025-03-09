/*
    Title: Stack ADT Header File
    Author: yjn33 
    Date: 2025/02/25
    GitHub: https://github.com/yjn33

    스택 추상 자료구조 헤더 파일입니다
*/


#define NULL_PTR ((void*)0)




typedef struct stack_node
{
    void *data;
    struct stack_node *link;
}StackNode;


typedef struct stack_type
{
    StackNode *top;
}StackType;


StackType *stack_init(void);
void stack_push(StackType *stk, void *push_data);
void* stack_pop(StackType *stk);






