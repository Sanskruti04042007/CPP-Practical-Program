#include <stdio.h>
int main()
{
int n, i, num, sum = 0;
printf("enter the value of N: ");
scanf("%d",&n);
for(i = 1;i <= n; i++)
{
printf("Enter number %d: ",i);
scanf("%d",&num);
sum = sum + num;
}
printf("sum = %d",sum);
return 0;
}
