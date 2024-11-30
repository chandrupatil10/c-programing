#include<stdio.h>
int main()
{
int num;
printf("enter number");
scanf("%d",&num);
if(num>=10&&num<=50)
{
printf("within a range,\n");
}
else
{
printf("not in range,\n");
}
return 0;
}