// 동적 메모리를 간단하게 할당하여 사용해보고 반환합니다.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    pi = (int *)malloc(sizeof(int));

    *pi = 10;

    printf("%d", *pi);

    free(pi);
}