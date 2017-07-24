#include<stdio.h>
int main()
{
int num,rev_no=0,rem,temp;
printf("enter then no");
scanf("%d",&num);
temp=num;
while(temp !=0)
{
rem=temp%10;
rev_no=rev_no*10+rem;
temp=temp/10;
}
if(rev_no==num)
printf("palindrome");
else
printf("not a palindrome");
return 0;
}
