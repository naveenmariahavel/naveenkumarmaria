#include<stdio.h>
void main()
{
long int n;
  clrscr();
int c=0;
printf("enter the number:");
scanf("%ld",&n);
while(n!=0)
{
    n=n/10;
    ++c;
}
printf("No of digits=%d", c);
getch();
}
