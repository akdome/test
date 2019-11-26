#include<stdio.h>
int main()
{int n,i,j;
scanf("%d",&n);
i=2,j=0;
for(i=2;i<n;i++){
if(n%i==0){j=1;}
}
if(j==0){printf("no");}
if(n=0){printf("no");}
else{printf("yes");}
return 0;

}