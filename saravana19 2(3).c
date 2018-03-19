#include<stdio.h>
#include<conio.h>
int main()
{

    int m,n;
    printf("enter the value\n");
    scanf("%d%d",&m,&n);
    printf("the produt is:%d",m*n);
    if(m/n==1)
    {
        printf("perfect square");
    }
    else
    {
        printf("no perfect square");
    }
      getch();
      return 0;
  }    
