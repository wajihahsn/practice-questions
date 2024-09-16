#include <stdio.h>

int main ()
{
	float Income, Tax, NetIncome;
	printf("Kindly enter your income: ");
	scanf("%f", &Income);
	
	if (Income <= 250000)
	{
		Tax = 0;
		printf("No tax. \n");
    }
    else if (Income > 250000 && Income <= 500000)
    {
    	Tax = 0.05;
    	printf("5 percent tax. \n");
	}
	else if (Income > 500000 && Income <= 1000000)
	{
		Tax = 0.20;
		printf("20 percent tax. \n");
	}
	else if (Income > 1000000)
	{
		Tax = 0.30;
		printf("30 percent tax. \n");
	}
	
	NetIncome = (Income * Tax) + (Income);
	printf("The Net Income is: %f\n", NetIncome);
	
	return 0;
}