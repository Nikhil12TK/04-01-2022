#include <stdio.h>
#define r 2
#define c 3
int main()
{
    int a[r][c],b[r][c],add[r][c],i,j;
    for( i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",*(a+i)+j);
    }
    for(i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        printf("%d",*(*(a+i)+j));
    printf("\n");
    }
    for( i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",*(b+i)+j);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",*(*(b+i)+j));
    printf("\n");
    }
    
    for( i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        *(*(add+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",*(*(add+i)+j));
printf("\n");
    }
    

    return 0;
}
