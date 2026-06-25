#include <stdio.h>
#include <time.h>
#include <string.h>
#include "typewriter.h"

	// remember to create a check to see if there's a new line character at the end of the string and only -1 if there is.
	// When passing a string that was scanned in via scanf, it drops the last character.
	// remember to create a check for double !! or ?? and not pause until the last one.

	void typewriter(char str[]){

	struct timespec letterpause = {0};
	letterpause.tv_nsec = 20 * 1000000;

	struct timespec sentencepause = {0};
	sentencepause.tv_nsec = 120 * 1000000;

	struct timespec ellipsispause = {0};
	ellipsispause.tv_nsec = 80 * 1000000;

	struct timespec sleeppause = {0};
	sleeppause.tv_sec = 1;

	size_t size = strlen(str);
	if (str[size - 1] == '\n'){
		size = size - 1;
	}

	nanosleep(&sleeppause, NULL);

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
	// putchar('\n');
	nanosleep(&sleeppause, NULL);
}
