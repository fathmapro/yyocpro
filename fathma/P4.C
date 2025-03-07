#include<stdio.h>
int main()
{
float basic,bonus,commission,totalSales,totalSalary;
int itemsSold;
printf("Enter the Basic Salary:");
scanf("%f",&basic);
printf("Enter the bonus per Item sold:");
scanf("%f",&bonus);
printf("enter the Commission Percentage:");
scanf("%f",&commission);
printf("Enter the Number of Items sold:");
scanf("%d",&itemsSold);
printf("Enter the Total Monthly Sales:");
scanf("%f",&totalSales);
bonus=itemsSold*bonus;
commission=(commission/100)*totalSales;
totalSalary=basic+bonus+commission;
printf("the total salary of the salesman is: %.2f\n",
totalSalary);
return 0;
}
