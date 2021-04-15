#include<stdio.h>

// a)

unsigned long endless(unsigned long n) {
	printf("n = %lu\n", n);

	//char memoryOnStack[1000];

	return endless(n+1);
}

// What would happen if the depth of recursion were not constrained? Will line 11 ever be reached?
// Since the recursive functiob us missing an end condition, the program would run forever (or until it runs out of memory). Thus line 11 would neverbe reached.
// Corresponding Compiler Warning: 'Sean_endless_recursion.cpp(6): warning C4717: 'endless': recursive on all control paths, function will cause runtime stack overflow'

// How many times will endless() be executed?
// The last value for n shown on the console is n = 3991, then a stack overflow exception occurs

// char memoryOnStack [1000];
// adding the char to the the function results in a lower amount of recursive calls: n = 596

// after commenting the line, I get n = 3993 for the time the stack overflow coccurs.Running the program multiple times leads to varying results for n which are close to but below 4000. 
// It seems that the memory each call uses on the step can vary slightly from run to run, leading to different results.


//b)

unsigned long recursive(unsigned long n) {
	if (n < 10) {
		return n;
	}
	return n % 10 + recursive(n / 10);
}

// the function repeatedly divides n by 10 and sums up the remainder, terminates when no further division is possible but adds the last value for n / 10

// same behaviour as recursive()
unsigned long iterative(unsigned long n) {
	unsigned long result = 0;

	while (n > 10) {
		result += n % 10;
		n = n / 10;
	}
	return result + n ;
}



int main(void)
{
	int n = 1989;

	unsigned long x = recursive(n);
	printf("Recursion terminated successfully, result is: x = %lu\n", x);

	unsigned long y = iterative(n);
	printf("Recursion terminated successfully, result is: x = %lu\n", y);
	return 0;
}