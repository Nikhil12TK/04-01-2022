#include <stdio.h>

int main()
{
    char s[20]="nikhil";
    int c=0;
    char *p=s;
    for(int i=0;*(p+i);i++)
    c++;
    printf("string length=%d\n",c);

    return 0;
}
