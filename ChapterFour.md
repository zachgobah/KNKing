# Chapter 4

## Arithmetic Operators - Operator Precedence and Associativity

The additive and multiplicative operators are said to be binary because they require two operands. The unary operators require one operand. For example, j++ or j-- are unary, while traditional math operations are binary.

If parantheses are not used in an equation with multiple operators, C uses *operator precendence* rules to resolve this potential ambiguity. The arithmetic operators have the following relative precedence:
	Highest + - ( unary )
		* / %
	Lowest  + - ( binary )
Operators listed on the same line, such as + and - have equal precedence. When two or more operators appear in the same expression, we can determine how the compiler will interpret the expression by repeatedly putting parentheses around subexpressions, starting with high-precedence operators and working down to low-precdence operators. The following examples illutrate the result:
	i + j * k  is equivalent to i + ( j * k )
	-i * -j    is equivalent to ( -i ) * ( -j )
	+i + j / k is equivalent to ( +i ) + ( j / k )

Operator precedence rules alone aren't enough when an expression contains two  or more operators at the same level of precedence. In this situation, the associativity of the operators comes into play. An operator is said to be *left associative* if it groups from left to right. The binary arithmetic operators ( *, /, %, +, and - ) area all left associative. An operator is right associative if it groups from right to left. The unary arithmetic operators ( + and - ) are both right associative, so 
	- + i		is equivalent to	-(+i)

C has around 50 operators  so it's best to consult a table of operators when in doubt, or use plenty of parentheses.

---

## Computing a UPC Check Digit

UPC (Universal Product Code) represents a 12-digit number that identifies both the manufacturer and the product.

Example: 0 13800 15173 5

The first digit identifies the type of item (0 or 7 for most items, 2 for items that must be weighed, 3 for drugs and health-related merchandise, and 5 for coupons).

The first set of five digits identifies the manufacturer (13800 = Nestle USA's Frozen Food Division).

The second set of five digits identifies the product (including package size).

The final digit is a "check digit," whose only purpose is to help identify an error in the preceding digits. If the UPC is scanned incorrectly, the first 11 digits probably won't be consistent with the last digit and the store's scanner will reject the entire code. Here's one method of computing the check digit:

	Add the first, third, fifth, seventh, ninth, and eleventh digits. 
	Add the second, fourth, sixth, eighth, and tenth digits.
	Multiply the first sum by 3 and add it to the second sum.
	Subtract 1 from the total.
	Compute the remainder when the adjusted total is divided by ten.
	Subract the remainder from nine.

Using the example above, 0 + 3 + 0 + 1 + 1 + 3 = 8 for the first sum and 1 + 8 + 0 + 5 + 7 = 21 for the second sum. Multiplying the first sum by 3 and adding the second yields 45. Subtracting 1 gives 44. The remainder upon dividing by 10 is 4. When the remainder is subtracted from 9, the result is 5. 

---

## Assignment Operators

Assignment in C is an operator, which means that the act of assignment produces a result (opposed to other languages where assigment is a statement). The = operator is right associative. The assignment operator requires an *lvalue* as its left value. An lvalue represents an object stored in computer memory, not a constant or the result of a computation. 

	12 = i;		/***  WRONG ***/
	i + j = 0;	/***  WRONG ***/
	-i = j;		/***  WRONG ***/

This produces the error "invalid lvalue in assignment." At this point, variables are the only kinds of lvalues shown, but more will appear later.

---
<div style="page-break-after: always"></div>

## Increment and Decrement Operators

Increment and decrement operators can be used as **prefix** operators  (++i and --i) or **postfix** operators. Postfix operators have higher precedence over prefix operators.

|  Precedence		|  Name			|  Symbol(s)		|  Associativity  |
|:----------------------|:----------------------|:----------------------|:----------------|
|  1			|  increment(postfix)	|  ++			|  left		  |	
|			|  decrement(postfix)	|  --			|		  |
|			|			|			|		  |
|  2			|  increment(prefix)	|  ++			|  right	  |
|			|  decrement(prefix)	|  --			|	 	  |
|			|  unary plus		|  +			|	          |
|			|  unary minus		|  -			|		  |
|			|			|			|		  |
|  3			|  multiplicative	|  * / %		|  left	 	  |
|			|			|			|		  |
|  4			|  additive		|  + -			|  left		  |
|			|			|			|		  |
|  5			|  assignment		|  = *= /= %= += -=	|  right	  |

## Order of Subexpression Evaluation

Avoid writing expressions that access the value of a variable and also modify it elsewhere in the expression.

a = 5;
c = ( b = a + 2 ) - ( a = 1 );

The expression accesses the value of *a* (in order to compute a + 2) and also modifies the value a by assigning it 1. Some compilers may produce a warning message such as "*operation on 'a' may be undefined" when they encounter such an expression. To prevent problems, it's a good idea to avoid using the assignment operators in subexpressions; instead, use a series of seperate assignments. 

a = 5;
b = a + 2;
a = 1;
c = b - a;

The value of c will always be 6 after these statements are executed.

---

## Expression Statements

C has the unusual rule that any expression can be used as a statement. Any expression, regardless of its type or what it computes can be turned into a statement by appending a semicolon. Examples: i = 1; i++;
