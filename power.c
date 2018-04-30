//power using recursion
#include<stdio.h>
int findPower(int a,int b)
{
if(b==0 || a==1)
return 1;
else
return a*findPower(a,b-1);


}
int main()
{

int a,b;
scanf("%d %d",&a,&b);
int ans=findPower(a,b);
printf("%d raised to %d is %d\n",a,b,ans);
return 0;


}
