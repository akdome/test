#include<stdio.h>
int main()
{int a=1,b=1,c,i;
double fact;
 printf("%10d%10d",a,b);    
 for(i=2;i<40;i++)         
 {c=a+b;  
 fact=a*1.0/b;               
  printf("%10d %.5lf",c,fact);         
  a=b;                      
  b=c;
 }//if(i/5==0){printf("/n");}
 return 0;
}









