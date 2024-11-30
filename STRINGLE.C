#include<stdio.h>
int main(){
int len=0,i=0;
char str[100];
printf("enter a string:\n");
gets(str);
while(str[i]!='\0')
{
len++;
i++;
}
printf("the length of the string is:%d",len);
return 0;
}
