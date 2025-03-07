#include<stdio.h>
int main()
{
int arr[]={10,20,30,40,50};
int*p=arr;
printf("address of arr:%p\n",arr);
printf("value at *p:%d\n",*p);
p++;
printf("after p++, value at *p:%d\n",*p);
p=arr+2;
printf("after p=arr+2,value at *p:%d\n",*p);
printf("difference in infices(P-rr):%ld\n",p-arr);
if(p>arr) 
printf("pointer p is ahead of arr\n");
return 0;
}
