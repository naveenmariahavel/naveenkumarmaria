#include<stdio.h>
int main()
{
int b;
printf("\n enter the value");
scanf("%d",&b);
while(b%10!==0)
{
b++;
}
printf("\n the nearest multiple is:");
return 0;
}
