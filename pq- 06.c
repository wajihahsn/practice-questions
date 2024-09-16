#include <stdio.h>

int main ()
{
	float Marks;
	printf("Enter the student's marks to evaluate the grade: ");
	scanf("%f", &Marks);
	
	if (Marks >= 90 && Marks < 100)
	{
		printf("Grade A");
	}
	else if (Marks >= 80 && Marks < 90)
	{
		printf("Grade B");
	}
	else if (Marks >= 70 && Marks < 80)
	{
		printf("Grade C");
	}
	else if (Marks >= 60 && Marks < 70)
	{
		printf("Grade D");
	}
	else if (Marks < 60)
	{
		printf("Grade F");
	}
	else 
	{
		printf("Invalid, enter marks out of 100.");
	}
	
	return 0;
}