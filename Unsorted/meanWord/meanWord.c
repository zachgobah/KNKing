#include <stdio.h>

int main (void)
{
	char ch;
	float count = 0.0f, word = 1.0f;
	
	printf("Enter a sentence: ");

	while((ch = getchar()) != '\n') {
			if (ch == ' '){
				word++;
				continue;
			} else {
				count++;
				continue;
			}

	}

	printf("Average word length: %.1f\n", (count / word));

	return 0;
}
