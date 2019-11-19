#include<stdio.h>
#include<math.h>                                                                                                                      .h>
int main() 
{int a,n,i,b,c;
scanf("%d %d",&a,&n);
b=c=0;
for(i=1;i<=n;i++){
    b=b+a;printf("%3d\n",b);
    c=c+b;
    a=a*10;
}printf("%d",c);
return 0;


}                                                                 