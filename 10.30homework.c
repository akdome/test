#include<stdio.h>
int main()
{double x,f;
scanf("%lf",&x);
if(x<=50){f=x*0.53;}
else{f=50*0.53+(x-50)*0.58;}
printf("f is %f",f);
return 0;
}

