#include <stdio.h>
//#include <stdio.h>
#define N 5
void main()
{
    int a[N]={1,2,3,4,5};
    int b[N]={5,4,3,2,1};
    int *p=a;
    int *k=b;
    for(int i=0,temp;i<N;i++)
   {
       temp=*(p+i);
       *(p+i)=*(k+i);
       *(k+i)=temp;
   }
   for(int i=0;i<N;i++)
   printf("a[%d]=%d\n",i,a[i]);
   for(int i=0;i<N;i++)
   printf("b[%d]=%d\n",i,b[i]);
   
}

