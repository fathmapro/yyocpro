#include<stdio.h>
int main()
{
int n,i,j,temp,arr[20];
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]<arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("Sorted array in descendimg order :");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
