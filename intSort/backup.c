#include <stdio.h>

int main() {
	int a, b, c, d;
	int largest, second, third, smallest;

	printf("Enter four integers separated by spaces: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a > b){
		if (a > c){
			if (a > d){
				largest = a;
				second = d;

				if (c > b){
					third = c;
					smallest = b;
				} else {
					third = b;
					smallest = c;
				}
			} else {
				largest = d;
				second = a;

				if (c > b){
					third = c;
					smallest = b;
				} else {
					third = b;
					smallest = c;
				}
			}
		} else {
			if (c > d) {
				largest = c;
				second = d;

				if (c > b){
				third = c;
				smallest = b;
				} else {
				third = b;
				smallest = c;
				}
			}
		}
	} else {
		if (b > c){
			if (b > d){
				largest = b;
				second = d;

				if (c > a){
				third = c;
				smallest = a;
				} else {
				smallest = a;
				third = c;
				}
			} else {
				largest = d;
				second = b;

				if (c > a){
				third = c;
				smallest = a;
				} else {
				smallest = a;
				third = c;
				}
			}
		} else {
			if (c > d){
				largest = c;
				second = d;

				if (b > a){
				third = b;
				smallest = a;
				} else {
				third = a;
				smallest = b;
				}
			} else {
				largest = d;
				second = c;

				if (b > a){
				third = b;
				smallest = a;
				} else {
				third = a;
				smallest = b;
				}
			}
		}
	}

	printf("Largest: %d\nSecond largest: %d\nThird: %d\nSmallest: %d\n", largest, second, third, smallest);

	return 0;

}
