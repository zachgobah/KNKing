## Computing a UPC Check Digit

UPC (Universal Product Code) represents a 12-digit number that identifies both the manufacturer and the product.

Example: 0 13800 15173 5

The first digit identifies the type of item (0 or 7 for most items, 2 for items that must be weighed, 3 for drugs and health-related merchandise, and 5 for coupons).

The first set of five digits identifies the manufacturer (13800 = Nestle USA's Frozen Food Division).

The second set of five digits identifies the product (including package size).

The final digit is a "check digit," whose only purpose is to help identify an error in the preceding digits. If the UPC is scanned incorrectly, the first 11 digits probably won't be consistent with the last digit and the store's scanner will reject the entire code. Here's one method of computing the check digit:

	Add the first, third, seventh, ninth, and eleventh digits. 
	Add the second, fourth, sixth, eighth, and tenth digits.
	Multiply the first sum by 3 and add it to the second sum.
	Subtract 1 from the total.
	Compute the remainder when the adjusted total is divided by ten.
	Subract the remainder from nine.

Using the example above, 0 + 3 + 0 + 1 + 1 + 3 = 8 for the first sum and 1 + 8 + 0 + 5 + 7 = 21 for the second sum. Multiplying the first sum by 3 and adding the second yields 45. Subtracting 1 gives 44. The remainder upon dividing by 10 is 4. When the remainder is subtracted from 9, the result is 5. 

