#include <stdio.h>

int main() {
	int nums[4];
	int temp;

	printf("Enter four integers separated by spaces: ");
	scanf("%d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3]);


	for (int i = 0; i < 3; i++){
		if (nums[i] > nums[i + 1]){
			temp = nums[i + 1];
			nums[i + 1] = nums[i];
			nums[i] = temp;
		}
	}

	printf("Largest: %d\nSecond largest: %d\nThird: %d\nSmallest: %d\n", nums[3], nums[2], nums[1], nums[0]);

	return 0;

}
