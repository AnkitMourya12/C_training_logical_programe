#include <stdio.h>
int main() {
	int salary,HRA,DA;
	
	printf("\nEnter the salary: ");
	scanf("%d", &salary);
	if(salary<=2000)
	{
		HRA=salary*20/100;
		DA=salary*10/100;
	}
    else if(salary>2000&&salary<=5000)
    {
    	HRA=salary*30/100;
		DA=salary*20/100; 	
	}
	else if(salary>5000&&salary<=10000)
	{
	HRA=salary*40/100;
		DA=salary*30/100; 	
	}
	else
	{
	HRA=salary*50/100;
		DA=salary*50/100;	
	}
	int totalsalary=salary+HRA+DA;
	printf("Totalsalary=%d",totalsalary);
}