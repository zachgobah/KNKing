# Exercises

1. Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.
	
	(a) i = 5; j = 3;
	printf("%d %d", i / j, i % j)

	Output: 1 2
	Answer: 1 2

	(b) i = 2; j = 3;
	printf("%d", (i + 10) % j);

	Output: 4
	Answer: 0	/* 12 / 3 is 4, but % is a modulus operator, showing only the remainder. */

	(c) i = 7; j = 8; k = 9;
	printf("%d", (i + 10) % k / j);

	Output: 1
	Answer: 1

	(d) i = 1; j = 2; k = 3;
	printf("%d", (i + 5) % (j + 2) / k);

	Output: 0
	Answer: 0

2. If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Justify your answer.

	No. -i makes only the first integer negative, which, when divided by a positive integer results in a negative. The second statement evaluates i/j then makes the result negative.
	Answer: Not in C89. Suppose that i is 9 and j is 7. The value of (-i)/j could be either -1 or -2, depending on the implementation. On the other hand, the value of -(i/j) is always -1, regardless of the implementation. In C99, on the other hand, the value of (-i)/j must be equal to the value of -(i/j).

