#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b,i;
    printf("enter the values a,b ");
    
     for(i=1;i<=3;i++)
     {
         scanf("%d %d ",&a,&b);
         if(a>b)
         {
             printf("%d",a-b);
         }
         else
         {
             printf("%d",b-a);
         }
     }
    
     getch();
     return 0;
     }
