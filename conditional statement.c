#include<stdio.h>
int main()
{
	int a;
	printf("Enter Marks: ");	//accepting value from users
	scanf("%d",&a);		//storing the value
	//condition
	if(a>=85 && a<=100)
	{
		printf("Grade A");
	}
	else if(a>=70 && a<=84)
	{
		printf("Grade B");
	}
	else if(a>=55 && a<=69)
	{
		printf("Grade C");
	}
	else if(a>=40 && a<=54)
	{
		printf("Grade D");
	}
	else if(a<40)
	{
		printf("Grade F");
	}
	else
	{
		printf("Invalid Input");
	}
}
