#include<stdio.h>
#include<stdio.h>
int main()
{
int i,a=1,num;
clrscr();
printf("enter a number\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
a=a*i;
printf("facrorial of %d:%d",num,a);
getch();
return 0;
}
