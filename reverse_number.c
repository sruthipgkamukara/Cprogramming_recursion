//reverse a number using recursion
#include<stdio.h>
#include<math.h>
int  getReversed(int n)
{
if(n<10)
return n*1;
int lsd=n%10;n=n/10;int count=log10(n)+1;

return lsd*(pow(10,count)) + getReversed(n);


}
int main()
{

int n;
scanf("%d",&n);
int rev=getReversed(n);
printf("%d \n",rev);
return 0;
}



