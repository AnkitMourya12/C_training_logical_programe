#include <stdio.h>
int main() {
	char emp_id[10];
	int hr;
	double value;
    double sal;
	printf("Enter the Employees ID: ");
	scanf("%s", &emp_id);
	printf("\nEnter the worked hrs: ");
	scanf("%d", &hr);
	printf("\nSalary amount/hr: ");
	scanf("%lf", &value);
    printf("\nthe total salary of employe in a month "); 
	sal = value * hr*30;
	printf("\nEmployees ID = %s\nSalary = INR %.2lf\n", emp_id,sal);
	return 0;
}
