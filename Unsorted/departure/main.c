#include <stdio.h>

int main(){
	int time = 0, hr = 0, min = 0;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hr, &min);

	if (((hr * 100) + min) >
