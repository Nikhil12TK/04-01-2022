#include <stdio.h>
int main()
{
    char s[20]="nikhil",i;
    char r[20];
    char *p=s;
    char *m=r;
    for(i=0;*(p+i);i++)
    *(m+i)=*(p+i);
    *(m+i)=*(p+i);
    for(i=0;*(m+i);i++)
    printf("%c\n",r[i]);

    return 0;
}

