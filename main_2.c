#include <stdio.h>
int main()
{
    int a,b,num;
    printf("��J�_��");
    scanf("%d",&num);
    for(a=1;a<=num;a=a+2)
    {
        for(b=num;b>=a;b=b-1)
            printf("*");
        printf("\n");
    }
    return 0;
}
