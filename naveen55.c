#include<stdio.h>
int main(void)
{
	int t,k,m;
	scanf("%d%d",&t,&k);
	m=t*k;
	if(m%2==0)
	printf("%d is even",m);
	else
	printf("%d is odd",m);
	return 0;
  }
