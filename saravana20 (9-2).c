#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
  getch();
return 0;
}
