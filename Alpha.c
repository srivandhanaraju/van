#include<stdio.h>
void main()
{
Char c;
printf("enter the alphabet");
scanf("%c",c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("it is an alphabet");
}
else{
printf("it is not an alphabet");
}
getch();
}
