#include<stdio.h>
#include<conio.h>
int main()
{
int n=6,i;
unsigned long long factorial =1;
printf("enter an integer");
if (n=0)
printf("error!factorial of negative does not ");
else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
  getch();
    return 0;
}
