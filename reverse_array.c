//reverse an array using recursion
#include<stdio.h>
void reverseArray(int* arr,int low,int high)
{
if(low>high)
return;
int temp=arr[low];
arr[low]=arr[high];
arr[high]=temp;

reverseArray(arr,low+1,high-1);




}


int main()
{
int n;
scanf("%d",&n);
int i;
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

reverseArray(arr,0,n-1);

for(i=0;i<n;i++)
printf("%d\t",arr[i]);

return 0;
}

