// 동적 메모리를 이용해 이차원 배열을 처리해봅시다.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i, x, y;
    int **ppi = (int **)malloc(sizeof(int *) * 8);

    for (int i = 0; i < 8; i++)
    {
        *(ppi + i) = (int *)malloc(sizeof(int) * 6);
    }
    int number = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            *(*(ppi + i) + j) = number++;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%3d", *(*(ppi + i) + j));
        }
        printf("\n");
    }

    return 0;
}