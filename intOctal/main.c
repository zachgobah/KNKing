#include <stdio.h>

int main() {
	int userNum = 0;
	int octNum = 0;
	int tempBuffer = 0;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &userNum);

	octNum = (userNum % 8);
	userNum = (userNum / 8);
	octNum = (((userNum % 8) * 10 ) + octNum);
	userNum = (userNum / 8);
	octNum = (((userNum % 8) * 100) + octNum);
	userNum = (userNum / 8);
	octNum = (((userNum % 8) * 1000) + octNum);
	userNum = (userNum / 8);
	octNum = (((userNum % 8) * 10000) + octNum);

	/*
	octNum = (((userNum % 8) * 100) + octNum);
	userNum = (userNum / 10);

	octNum = (((userNum % 8) * 1000) + octNum);
	userNum = (userNum / 10);

	octNum = (((userNum % 8) * 10000) + octNum);
	userNum = (userNum / 10);*/

	// printf("userNum: %d\n", userNum);
	printf("octNum: %0.5d\n", octNum);
	// printf("Temp Buffer: %d\n", tempBuffer);
	}
