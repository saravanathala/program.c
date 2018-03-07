#include<stdio.h>
#include<conio.h>
int main()
{
int s,m,n;
	printf("Enter the numbers");
	scanf("%d%d",&m,&n);
	s=m*n;
	if((s%2)==0)
	{
		printf("Even");
	}
	if((s%2)==1)
	{
		printf("Odd");
	}
  getch();
	return 0;
}
