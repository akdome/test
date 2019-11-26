#include<stdio.h>
#include<math.h>
int main()
{int x,i,sun,c;
double s,a,b;
i=0,s=0,a=1;
scanf("%d",&x);
while(a*1.0/b>=0.00001){
a=pow(x,i);
for(c=0;c<=i;c++){
b*=c;
}s+=a*1.0/b;
i++;
}
printf("%lf",s);
return 0;
}