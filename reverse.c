//reverse using recursion
#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
if(*str)
{
reverse(str+1);
printf("%c",*str);

}


}
int main()
{
char word[100];
scanf("%s",&word);

reverse(word);
printf("\n");
return 0;


}
