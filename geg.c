#include<stdio.h>
int main()
{
long long n;
int count =0;
printf("Enter the num");
scanf("%lld",&n);
while(n !=0)
{
n=n/10;
++count;
}
printf("no of gegit:%d",count);
}
