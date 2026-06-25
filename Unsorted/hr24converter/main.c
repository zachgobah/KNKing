#include <stdio.h>

int main() {
	int hr;
	int min;
	char ampm[3] = "AM";
	char *ptr = ampm;

	while (true){
		printf("Enter a 24-hour time (XX:XX): ");
		scanf("%2d:%2d", &hr, &min);

		if (min > 59 || hr > 23){
			printf("Invalid time format!\n");
			continue;
		}

		if (hr >= 00 && hr < 13){
			if (hr == 00) {
				hr = 12;
			}
		}
		else { (hr = (hr - 12)); *ptr = 'P'; }

		printf("Equivalent 12-hour time: %2d:%2d %s\n", hr, min, ampm);
		return false;
	}
	return 0;

}
