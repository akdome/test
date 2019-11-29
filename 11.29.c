#include<stdio.h>

double max(double a,double b)
{if(a>b){return a;}
else{return b;}
}

int main()
{double a,b; 
scanf("%lf %lf",&a,&b);

printf("%.3lf",max(a,b));//单向拷贝，且不保存
return 0;}
//返回值类型（说明符）（若没有 c89则int c99为非法） 形参（逗号隔开） 函数实现过程（retun+ 数or表达式）
//                       （最前声明）（就前声明）                                                （作用域） 
//void类型可为空 non-void有返回值可随意使用（存，打印，)可丢 x=printf（" "）