#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159
#define FRACTION (4.0f / 3.0f)

struct sphere {
	double radius;
	double volume;
};

double computeVolume(double r)
{

	return (FRACTION * PI * (r * r * r));
}

int main()
{	
	struct sphere mySphere;
	double inputRadius;
	
	do
	{
		printf("Enter radius(0 to exit): ");
		scanf("%lf", &inputRadius);

		if (inputRadius != 0) {
			mySphere.radius = inputRadius;
			mySphere.volume = computeVolume(mySphere.radius);

			printf("Volume: %lf\n", mySphere.volume);
		}

	} while (inputRadius != 0);

	return 0;
}