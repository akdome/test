#include<stdio.h>
#include<math.h>                                                                                                                      .h>
int main()
{int i=0,n;
float sun=1,sum=0,a;
scanf("%d",n);
while(i<=n){
    sum+=sun;
    a=pow(-1,i+1);
sun=(1.0/(2*i+1))*a;
i++;
}printf("lf",sum);
return 0;
}