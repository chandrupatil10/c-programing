#include<stdio.h>
int main()
{
int num;
printf("enter the number,\n:");
scanf("%d",&num);
if(num > 0)
{
printf("%d is positive");
}else{ if(num < 0){
printf("%d is negative");
}else{
printf("%d is zero");
}
return 0;
}
}