#include <stdio.h>
#include <math.h>

int main (void)
{
	double x = 0.0, xy = 0.0, y = 1.0, new_y = 0.0;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	/* while ((y - new_y) < (y * 0.00001)){
		xy = (x / y);
		new_y = ((y + xy) / 2);
		y = new_y;

	} */

	while(1){
		xy = (x/y);
		new_y = ((y + xy) / 2);
		if (fabs(y - new_y) < (y * 0.00001)){
			       break;
		}	       
		y = new_y;
	}

	printf("Square root: %.5lf\n", y);

	return 0;

}

