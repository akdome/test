#include<stdio.h>
#define N 5
int findMin(int a[]);
int main(void)
{
  int i,a[5];
  for(i=0;i<5;i++){
      scanf("%d",&a[i]);
  }
    findMin(N);
    printf("%d",a[i]);
    return 0;
  }

  int findMin(int a[])
  {int i,N;
    for(i=0;i<N;i++){
    if(a[i+1]>a[i])
    a[i+1]=a[i];  
} 

  return a[i];
}
//以下能正确定义且赋初值的语句是( )。 
// int n1=n2=10;  char c=32;  float f=f+1.1;  
// double x=12.3e2.5;  ~B ~~~2
