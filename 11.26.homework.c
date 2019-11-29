/*#include<stdio.h>
#include<math.h>
int main()
{int n,i,j,k;

i=2;
for(k=2;k<=100;k++)
{j=0;

for(i=2;i<k;i++)
{
if(k%i==0)
{
    j=1;
    break;
}
}

if(j==0){printf("%d ",k);}


}
return 0;

}*/
int PrimeNumer(int x) 
{
int i;
for (i = 2; i < x; i++)
{
if (x%i == 0)
{
return 0; }
}
return 1;}
#include<stdio.h>
int main()
{
int i,a;
int count = 0;
for (i = 2; i <=100; i++)
{
if (PrimeNumer(i))
{
count++; 
printf("%d ", i);
if(count%5==0){printf("\n");}
}
}

printf("次数%d", count);
return 0;
}