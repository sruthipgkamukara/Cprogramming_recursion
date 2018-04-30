//checking for palindrome
#include<stdio.h>
#include<string.h>
int isPalindrome(char* str,int low,int high)
{
if(low>high)
return 1;
if(str[low]==str[high])
isPalindrome(str,low+1,high-1);
else
return 0;
}
int main()
{
char str[100];
scanf("%s",str);
if(isPalindrome(str,0,strlen(str)-1))
printf("P\n");
else
printf("N\n");


return 0;
}
