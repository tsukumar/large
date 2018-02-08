#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[5000];
int w,count=0;
  clrscr();
printf("\n Enter the string");
gets(a);
for(w=0;a[w]!=NULL;w++)
{
if((a[w]>='a'&&a[w]<='z')||(a[w]>='A'&&a[w]<='z'))
{
count=count+1;
}
}
printf("The number of characters u entered were %d",count);
getch();
}
