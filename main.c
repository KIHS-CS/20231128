#include <stdio.h>

int main()
{
    int i, j;
    printf("��J�@�ө_��:");
    scanf("%d", &i);
    for (i; i >= 1 ; i--)
    {
        for (j = 2*i-1 ; j >= 1 ; j--)
            printf("%d ", j);
        printf("\n");
    }
}
