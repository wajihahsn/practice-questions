#include <stdio.h>

int main ()
{
	int LeapYear;
	printf("Enter the year, you'd like to check: ");
	scanf("%d", &LeapYear);
	
	if ((LeapYear % 400 == 0) || (LeapYear % 4 == 0) && (LeapYear % 10 != 0))
		{
			printf ("It is a Leap Year! ");
		}
	else
	{
		printf("It is NOT a Leap Year! ");
	}
	return 0;	
}

	
	
	
	
	