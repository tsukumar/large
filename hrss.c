#include <stdio.h>

void main()
{
    int f,a[100],i;

   
    printf("Enter number of element ");
    scanf("%d", &f);

	for(int i=0;i<f;i++)
	{
	scanf("%d",&a[i]);
	}

	for( i=0;i<f;i++)
	{
	printf("%d %d",a[i],i);
	printf("\n");
	}
	
}
