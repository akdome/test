#include<stdio.h>
int main()
{int max,a,b,c;
printf("piease enter a b c\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b){
    if(a>c){max=a ;}
    else{max=c;}
}else{
    if(b>c){max=b;}
    else{max=c;}

}
printf("max=%d",max);
return 0;
}