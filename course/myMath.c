# include <stdio.h>
int main()
{
	printf("We are going to calculate the number of dozens of eggs from the number that you enter but first:\n\nEnter the number of eggs that you have.");
	int eggs;
	scanf("%i", &eggs);
	double calc = eggs / 12.0;
	printf("so you have %f dozens of eggs", calc);

	return 0;
}
