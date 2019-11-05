#include<stdio.h>
int main()
{int a,b,c,d;
printf("pleae enter long and time\n");
scanf("%d%d",&a,&b);
if(a<3){c=10+(b-b%5)/5*2;}
if(3<a<10){c=10+(a-3)*2+(b-b%5)/5*2;}
if(a>10){c=30+(a-10)*3+(b-b%5)/5*2;} 
c=c+0.5;
printf("money is %d",c);
return 0;}