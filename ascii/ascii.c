#include <stdio.h>

int main() {
	char i; /* variable declaration */

	i= 'D'; /* variable definition */

//	printf("i = %c (decimal)\n", i);
	/* example of wrapping using the data type limits; think of modulo */
	printf("i = %c (decimal) after adding %d to %d\n", i+257, 257, i);
//	printf("c = %x (hex)\n", c);
//	printf("c = %o (octal)\n", c)

	return 0;
}
