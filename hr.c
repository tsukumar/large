#include<stdio.h>
int main()
{
  int a,d,n;
  printf("\n Enter the minutes=");
  scanf("%d",&n);
  a=n/60;
  d=n%60;
  printf("\n time=%d:%d",a,d);
  return 0;
}
