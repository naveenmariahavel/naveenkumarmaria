#include<stdio.h>
#inlude<conio.h>
void main()
{

char str[30];
int i=0,count=0;
  printf("enter the string");
  scanf("%s",&str);
while(str[i]!='\0')
{
if(isdigit(str[i]))
{
++count;
}
++i;
}
count++;
printf("no of digits is %d ",count);
}
