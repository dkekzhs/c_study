// 동적 메모리로 정수 5개를 처리해봅시다.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    pi = (int *)malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
    {
        *(pi + i) = i + 10;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(pi + i));
    }

    return 0;
}