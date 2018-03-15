#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",a,b);
printf("the unswap values are%d%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("the swaped values%d%d",a,b);
return 0;
}
