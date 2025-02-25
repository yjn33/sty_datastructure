/*
    Title: Tree ADT
    Author: yjn33 
    Date: 2025/02/25
    GitHub: https://github.com/yjn33

    스택 추상 자료구조 구현입니다

    ASCII 문자열 호환으로 인해 printf함수인자는 영문으로 작성하였습니다
    미숙한 영작 실력에 많은 양해바랍니다
*/


#include <stdio.h>
#include <stdlib.h>

#include "stack.h"


/*
    StackType 구조체 초기화 함수

    클래스 new 연산자와 비슷하게 이중포인터를 사용하는 것 대신
    할당된 TreeType 메모리 공간을 초기화하여 L-value에 return 한다
    
    주의: L-value 없이 해당 함수 호출시 할당 메모리가 discard되어지지 않아 
    memory leak 발생 가능성이 있다 (C언어는 가비지 컬렉터 기능이 없음)
*/
StackType *stack_init(void)
{
    StackType *new_stack = malloc(sizeof(StackType));


    // 메모리 할당 실패시 -> heap 공간 부족
    if(new_stack == NULL_PTR)
    {
        printf("fail to allocation of memory \n");
        exit(EXIT_FAILURE);
    }

    // 메모리 할당 성공시
    return new_stack;

}







