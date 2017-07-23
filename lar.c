#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three no:");
scanf("%nd %d %d",&a,&b,&c);
if(a>= b ||a<= c)
printf(" a is large");
if(b>= a || b<= c)
printf(" b is large");
else
printf(" c is large");
return 0;
}
