//find sum of digits
#include<stdio.h>
int findSum(int n)
{
if(n==0)
return 0;
else
return (n%10)+findSum(n/10);


}
int main()
{
int n;
scanf("%d",&n);
printf("Sum of digits : %d\n",findSum(n));
return 0;

}
