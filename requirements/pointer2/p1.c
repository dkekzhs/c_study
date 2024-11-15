// 동적 메모리를 이용해 구조체를 다루어봅시다.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    int idx;
    char *name;
};

int main(void)
{
    struct Book *book;
    book = (struct Book *)malloc(sizeof(struct Book) * 2);

    char *pc, *pc2;
    pc = "안녕하세요";
    pc2 = "방가워요";

    book->idx = 1;
    (book + 1)->idx = 2;

    book->name = (char *)malloc(sizeof(strlen(pc)));
    (book + 1)->name = (char *)malloc(sizeof(strlen(pc2)));

    book->name = pc;
    (book + 1)->name = pc2;

    for (int i = 0; i < 2; i++)
    {
        printf("%d 북 인덱스 %s 북 이름 \n", (book + i)->idx, (book + i)->name);
    }

    printf("\n");
    free(book->name);
    free((book + 1)->name);
    free(book);
    free((book + 1));

    return 0;
}