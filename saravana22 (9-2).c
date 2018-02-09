#include<stdio.h>
#include<conio.h>
int main ()
{
int i=0;
printf("enter the value \n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("Enter the values");
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
  if(max<a[i])
  {
    max=a[i];
  }
}
  printf("%d",max);
getch();
return 0;
}
