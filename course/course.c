#include <stdio.h>

int main(void)
{
	int radius, result;
	char name[11];
	printf("First enter your name\n");
	scanf("%name", name);
	printf("then the radius\n");
	scanf("%radius", &radius);

	result = 3.14 * (double)(radius * radius);
	printf("Hi %s, the radius was %i so the area is %f\n", name, radius, result);

	return 0;
}
