#include <stdio.h>
#define N 5
void main()
{
    int a[N]={1,2,3,4,5},temp;
   int *p=a;
   for(int i=N-1,j=0;i>=j;i--,j++)
   {
       temp=a[j];
       a[j]=*(p+i);
       *(p+i)=temp;
   }
   for(int i=0;i<N;i++)
   printf("%d\n",a[i]);
}
