//Driving License ----> gender = Male and age >= 18 - Driving Allowed
//						gender = Female and age >= 22 - ----"------
#include<stdio.h>
int main()
{
	char gender;
	int age;
	printf("\nEnter the Gender (m/f):");
	scanf("%c",&gender);

	printf("\nEnter the Age:");
	scanf("%d",&age);
	
	if(age>=18 && gender == 'm')
	{
		printf("\nDriving Allowed for Male Driver");
	}
	else
	{
		printf("\nDriving Not Allowed for Male Driver");
	}
	return 0;
}