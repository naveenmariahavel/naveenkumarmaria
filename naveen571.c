#include<stdio.h>
void main()
{
int a,b,t;
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("the swaped values are%d%d",a,b);
return 0;
}
