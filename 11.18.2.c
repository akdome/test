 #include<stdio.h>
int main()
{int  n=1; float sum=1.0, sun=1.0;
while(sun>sum-5){
sun/=n;
sum+=sun;
n++;
}printf("%f\n",sum);            
return 0;
}