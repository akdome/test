#include<stdio.h>
int main()
{int a;
printf("please enter:\n");
scanf("%d",&a);
if(a>0){a=a;}
else{a=-a;}
printf("a is %d",a);
return 0;}