#include<stdio.h>
#include<conio.h>
int main()
{
int D,p=1,d,sum=0,a;
clrscr();
printf("Enter n and d values");
scanf("%d %d ",&D,&d);
for(a=1;a<=D;a++)
{
sum=sum+p;
p=p+d;
}
printf("\n%d",sum);
getch();
}
