#include <stdio.h>
int main()
{
    char name1[10];
    char name2[10];
    printf("Enter the first name :");
    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &name1[i]);
    }
    printf("Enter the second name :");
    for (int j = 0; j < 10; j++)
    {
        scanf(" %c", &name2[j]);
    }

    printf("First name is :");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", name1[i]);
    }
    printf("Second name is :");
    for (int j = 0; j < 10; j++)
    {
        printf("%c", name2[j]);
    }

    return 0;
}