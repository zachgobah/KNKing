#include <stdio.h>

int main() {

	int month = 0, day = 0, year = 0;
	char *modifier;
	char *monthString;

	printf("Enter date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	switch (day) {
		case 1:
			modifier = "st";
			break;
		case 2:
			modifier = "nd";
			break;
		case 3:
			modifier = "rd";
			break;
		default:
			modifier = "th";
			break;
	}

	switch (month) {
		case 1:
			monthString = "January";
			break;
		case 2:
			monthString = "February";
			break;
		case 3:
			monthString = "March";
			break;
		case 4:
			monthString = "April";
			break;
		case 5:
			monthString = "May";
			break;
		case 6:
			monthString = "June";
			break;
		case 7:
			monthString = "July";
			break;
		case 8:
			monthString = "August";
			break;
		case 9:
			monthString = "September";
			break;
		case 10:
			monthString = "October";
			break;
		case 11:
			monthString = "November";
			break;
		case 12:
			monthString = "December";
			break;
		}

	printf("Dated this %d%s day of %s, 20%02d\n", day, modifier, monthString, year);

	return 0;

}
