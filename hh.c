#include<stdio.h>
int main()
{
    
    int i,x,n,cao,k;
    int a[5];
   
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5-1;i++){
        for(x=0;x<5-1-i;x++)
        {
            if(a[i+1]<a[i])
            {
             a[i]=cao;
             a[i+1]=a[i];
             a[i+1]=cao;
            }
        }
    }
  for(i=0;i<5;i++){
  printf("%d ",a[i]);
  }
printf("\n");
return 0;
}