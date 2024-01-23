//Driving License ----> gender = Male and age >= 18 - Driving Allowed for Male
//						gender = Female and age >= 22 - ----"------ for Female
#include<stdio.h>
int main()
{
	char gender;
	int age;
	printf("\nEnter the Gender (m/f):");
	scanf("%c",&gender);

	printf("\nEnter the Age:");
	scanf("%d",&age);
	
	if(gender == 'm')
	{
		if(age >= 18)
		{
			printf("\nDriving Allowed for Male Driver");
		}
		else
		{
			printf("\nDriving Not Allowed for Male Driver");
		}
	}
	else
	{
		if(age >= 22)
		{
			printf("\nDriving Allowed for Female Driver");
		}
		else
		{
			printf("\nDriving Not Allowed for Female Driver");
		}
	}
	
	return 0;
}









