#include<stdio.h>
int main()
{int i, n, sum, sun;
printf("please enter n:");
scanf("%d",&n);
for ( i = 0; i <= n; i++){
    sun*=i;
    sum+=sun;
}
printf("1!+2£¡+3£¡+....n!=%d",sum);

   return 0;
}