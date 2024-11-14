#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char *name;
    int idx;
};

int main(void)
{
    struct Student *student;
    char *name = "temp";
    student = (struct Student *)malloc(sizeof(struct Student));

    if (student == NULL)
        return 1;

    student->name = (char *)malloc(strlen(name) + 1);
    if (student->name == NULL)
        return 1;
    strcpy(student->name, name);
    printf("인덱스는 : %d 이름은 %s \n", student->idx, student->name);

    for (int i = 0; i < strlen(student->name); i++)
    {
        printf("%c ", student->name[i]);
    }

    free(student->name);
    free(student);

    return 0;
}
