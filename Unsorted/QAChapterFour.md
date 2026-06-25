# Q & A

Q: I notice that C has no exponentiation operator. How can I raise a number to a power? 
A: Raising an integer to a small positive integer power is best done by repeated multiplication (i * i * i is i cubed). To raise a number to a noninteger power, call the *pow* function (23.3).

Q: I want to apply the % operator to a floating-point operand, but my program won't compile. What can I do? [p. 54]
A: The % operator requires integer operands. Use the *fmod* function instead.

Q: Why are the rules for using the / and % operators with negative operands so complicated? [p. 54]
A: The rules aren't as complicated as they may first appear. In both C89 and C99, the goal is to ensure that the value of (a / b) * b + a % b will always be equal to a (and indeed, both standards guarantee that this the case, provided that the value of a / b is "representable"). The problem is that there are two ways for a / b and a % b to satisfy this equality if either a or b is negative, as seen in C89, where either -9 / 7 is -1 and -9 % 7 is -2, or -9 / 7 is -2 and -9 % 7 is 5. In the first case, (-9 / 7) * 7 + -9 % 7 has the value -1 * 7 + -2 = -9, and in the second case, (-9 / 7) * 7 + -9 % 7 has the value -2 * 7 + 5 = -9. By the time C99 rolled around, most CPUs were designed to truncate the result of division toward zero, so this was written into the standard as the only allowable outcome.

Q: If C has lvalues, does it also have rvalues? [p. 59]
A: Yes, indeed. An lvalue is an expression that can appear on the left side of an assignment; an rvalue is an expression that can appear on the right side. Thus, an rvalue could be a variable, constant, or more complex expression. In this book, we'll use the term "expression" instead of "rvalue."

Q: You said that v += e isn't equivalent to v = v + e if v has a side effect. Can you explain? [p. 60]
A: Evaluating v += e causes v to be evaluated only once; evaluating v = v + e causes v to be evaluated twice. Any side effect caused by evaluating v will occur twice in the latter case. In the following example, i is incremented once: 

a[i++] += 2;

If we use = instead of +=, here's what the statement will look like:

a[i++] = a[i++] + 2;

The value of i is modified as well as elsewhere in the statement, so the effect of executing the statement is undefined. It's unlikely that the i will be incremented twice, but we can't say for certainty what will happen.

Q: 
