#include<stdio.h>
int hhhh(int b[],int n);
int main()
{
    int a[20];
    int i,x,n;
    scanf("%d",&n);
    printf("Please input the element: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    x=hhhh(a,n);
    printf("hhhh is %d\n",x);
    return 0;}



    int hhhh(int b[],int n)
{
    int x,i;
    for(i=1;i<n;i++){
        if(b[i+1]<b[i]){
            x=b[i];
        }
    }
    return x;
}