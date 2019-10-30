#include<stdio.h>
int main(void)
{
    int m, n =5;
    m=--n + ++n;
    printf("%d\n",m);//先算n++,不分前增后增//
    return 0;
}