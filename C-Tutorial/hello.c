#include <stdio.h>

int main()
{
	//calculate area of circle
	int radius;

	printf("Please enter a radius: ");
	scanf("%i", &radius);

	double area;
	area = 3.14159 * (double) radius * (double) radius;

	printf("The given radius is %i.\nThe corresponding area is %f.\n", radius, area);

	return 0;
}
