#include<stdio.h>

void main()
{
  int a,f,m1,m2,p,subm;
  printf("\n Enter 1st time =");
  scanf("%d%d",&a,&m1);
  printf("\n Enter 2nd time=");
  scanf("%d%d",&f,&m2);
  
  
  p=a-f;
  subm=m1-m2;
  printf("between time=%d:%d",p,subm);
}
