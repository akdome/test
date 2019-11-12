#include<stdio.h>
int main()
{int i,n;double prince;
for(i=1;i<=5;i++){
    printf("[1] is apples\n"); 
    printf("[2] is pears\n");
    printf("[3] is orangs\n");
    printf("[4] is grapes\n");
    printf("please enter ");
    scanf("%d",&n);
    switch(n){
        case 1:prince=3.00;break;
        case 2:prince=2.50;break;
        case 3:prince=4.10;break;
        case 4:prince=10.20;break;
    default:prince=0;break;
    
    }printf("prince is %.2lf yuan/kg\n,prince");
    return 0;}
}