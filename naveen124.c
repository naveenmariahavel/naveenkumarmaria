#include<stdio.h> 
void main()
{
int n1,n2,rem,i;
printf("enter the First number Range\n");
scanf("%d",&n1);
printf("enter the Final number Range\n");
scanf("%d",&n2);
printf("\n The odd numbers between %d and %d are ",n1,n2); 
for(i=1;i<=2;i++)
{
rem = i % 2;
if(rem==0);
printf("\n%d",i);
}
return 0;
}

