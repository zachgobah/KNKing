#include <stdio.h>

int main(){
	int speed = 0;
	printf("Enter wind speed in knots: ");
	scanf("%d", &speed);

	if (speed < 1){
		printf("The wind is calm.\n");
	} else if (speed >= 1 && speed <= 3){
		printf("The wind is light air.\n");
	} else if (speed >= 4 && speed <= 27){
		printf("The wind is a breeze.\n");
	} else if (speed >= 28 && speed <= 47){
		printf("The wind is a gale.\n");
	} else if (speed >= 48 && speed <= 63){
		printf("There is a storm.\n");
	} else if (speed > 63){
		printf("You are in a hurricane. Seek shelter!\n");
	}

	return 0;

}
