#include<stdio.h>
int main()
{
    int i,k,j,m,q,n;
    scanf("%d",n);
    for(i=1;i<=n;i++){
    for(k=1;k<=2;k++){
    for(j=1;j<i;j++)
     printf(" ");
printf("w");
for(m=1;m<=2*n-2*i;m++)
printf(" ");
printf("w");
for(q=1;q<i;q++)
printf(" ");
}
printf("\n");
}
return 0;}