#include <stdio.h>
#define N 5
void main()
{
    int a[N]={1,2,3,4,5};
    int b[N];
    int *p=a;
    for(int i=0;i<N;i++)
   b[i]=*(p+i);
   for(int i=0;i<N;i++)
   printf("b[%d]=%d\n",i,b[i]);
   
}
