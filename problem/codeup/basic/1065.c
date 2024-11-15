// 1065 : [기초-조건/선택실행구조] 정수 3개 입력받아 짝수만 출력하기(설명)
// 세 정수 a, b, c가 입력되었을 때, 짝수만 출력해보자.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void when(int a);
void input(int **a, int **b, int **c);
void init(int **a, int **b, int **c);
void clear(int *a, int *b, int *c);

int main(void)
{
    int *a, *b, *c;
    init(&a, &b, &c);
    input(&a, &b, &c);
    when(*a);
    when(*b);
    when(*c);
    clear(a, b, c);
    return 0;
}

void when(int a)
{
    if (a % 2 == 0)
    {
        printf("%d\n", a);
    }
}

void input(int **a, int **b, int **c)
{
    scanf("%d", *a);
    scanf("%d", *b);
    scanf("%d", *c);
}

void init(int **a, int **b, int **c)
{
    *a = (int *)malloc(sizeof(int));
    *b = (int *)malloc(sizeof(int));
    *c = (int *)malloc(sizeof(int));
}

void clear(int *a, int *b, int *c)
{
    free(a);
    free(b);
    free(c);
}
