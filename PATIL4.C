#include<stdio.h>
int main(){
int i,num;
clrscr();
printf("enter a number\n");
scanf("%d",&num);
for(i=1;i<=50;i++)
if(i%2==0){
printf("%d\n",i);
}
return 0;
}