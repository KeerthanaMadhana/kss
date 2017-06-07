#include<stdio.h>
int main()
{
char c,n;
printf("enter the character");
scanf("%c",&c);
{
if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
printf("the entered character is vowel");
}
else
{
printf("the entered  character is consonant");
}
return 0;
}