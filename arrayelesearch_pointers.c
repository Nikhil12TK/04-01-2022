#include <stdio.h>
#define N 5
void main()
{
    int a[N]={1,2,3,4,5};
   int ele,flag=0;
   printf("enter the element to search in the array:");
   scanf("%d",&ele);
   int *p=a;
   for(int i=0;i<N;i++)

   if(*(p+i)==ele)
   {
   printf("element  %d is found in index %d\n",ele,i);
   flag=1;
   }
   if(flag==0)
   printf("element is not found");
 }
