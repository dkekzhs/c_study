// 동적 메모리로 100바이트를 할당 받아 알파벳을 출력해봅니다.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *cp;
    cp = (char *)malloc(sizeof(char) * 100);

    for (int i = 0; i < 26; i++)
    {
        *(cp + i) = 'a' + i;
    }
    *(cp + 26) = 0;

    for (int i = 0; i < 26; i++)
        printf("%c", cp[i]);

    free(cp);

    return 0;
}