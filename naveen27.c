#include<stdio.h>
#include<conio.h>
int main()
{
char s[10]; int l,i,d=0;
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]>='0'&&s[i]<='9')
{
d++;
}
else
{
printf("\nnot numeric");
break;
}
}
if(l==d)
{
printf("\n numeric");
}
return 0;
}
