#include <stdio.h>
#include<stdlib.h>
#define r 3
#define c 4
void main()
{
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",(*(a+i)+j));
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        printf("%d ",*(*(a+i)+j));
        printf("\n");
    }
}
