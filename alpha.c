#include<stdio.h>
int main()
{
char c;
printf("enter the sentence");
scanf("%c",&c);
if((c<= 'a' && c>= 'z')||( c <= 'A'&& c>= 'Z'))
printf("alphabet");
else
printf("not aalphabet");
return 0;
}
