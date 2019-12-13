#include<stdio.h>
void hhhh(int b[],int n);
int main()
{
  int n;
  int i;
  int St[20];
  int Min=0;

  scanf("%d",&n);
  printf("Please input the element: ");
for(i=0;i<n;i++)
{
  scanf("%d",&St[i]);
}
  for(i=0;i<n;i++){
  printf("%3d",St[i]);
}
  printf("\n");
  hhhh(St,n);

for(i=0;i<n;i++){
  printf("%3d",St[i]);
}
  printf("\n");

  return 0;
}


void hhhh(int b[],int n)
{
    int i;
for(i=0;i<n;i++){
    b[i]=0;
}
}