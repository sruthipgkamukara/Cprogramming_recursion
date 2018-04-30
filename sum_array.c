//sum of elements using recursion
#include<stdio.h>

int sumArray(int* arr,int n)
{
	if(n==1)
		return arr[0];
	else
		return arr[n-1]+sumArray(arr,n-1);



}


int main()
{

int n;
scanf("%d",&n);

int i;int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

int sum=sumArray(arr,n);
printf("Sum of elements : %d\n",sum);
return 0;
}
