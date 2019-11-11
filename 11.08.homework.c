#include<stdio.h>
int main()

{int mark,n,i,sum;
double averge;
int a,b,c,d,e;
printf("please enter n");
scanf("%d",&n);
a=b=c=d=e=sum=0;
for(i=1;i<=n;i++)
{
scanf("%d",&mark);
sum=mark+sum;
if(mark>=90)a++;
else if(90>mark>=80)b++;
else if(80>mark>=70)c++;
else if(70>mark>=60)d++;
else   e++;}
printf("averge is %lf\n",averge*1.0/n);
printf("A %d,B %d,C %d,D %d,E %d",a,b,c,d,e);
return 0;
}