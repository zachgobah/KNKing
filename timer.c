#include <stdio.h>
#include <unistd.h>  // for sleep()
#include <time.h>
#include <string.h>

	void typewriter(char str[]){

	struct timespec letterpause = {0};
	letterpause.tv_nsec = 20 * 1000000;

	struct timespec sentencepause = {0};
	sentencepause.tv_sec = 2;

	struct timespec ellipsispause = {0};
	ellipsispause.tv_nsec = 80 * 1000000;

	size_t size = strlen(str);
	size = size - 1;

	sleep(1);

	for (int i = 0; i < size; i++){
		printf("%c", str[i]);
		fflush(stdout);
		if (str[i] == '.' && ((str[i + 1]) == '.')){
			nanosleep(&ellipsispause, NULL);
		}

		else if (str[i] == '.' && (str[i + 1]) != '.' || str[i] == '!' || str[i] == '?'){
			nanosleep(&sentencepause, NULL);
		}

		else {
			nanosleep(&letterpause, NULL);
		}
	}
	printf("\n");
	sleep(1);
}


int main () {
	char sentence[1000] = "Hello and welcome to my Linux virtual environment."
	"\nToday we will learn about each other and then we will conclude with a test."
	"\nIf you would like to exit, simply type (exit) at any input prompt........."
	"\nHowever, if you stay, know that I cannot help you.\n";

	typewriter(sentence);

	return 0;
}
