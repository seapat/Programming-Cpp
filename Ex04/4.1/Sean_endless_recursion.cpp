#include<stdio.h>

unsigned long endless(unsigned long n) {
	printf("n = %lu\n", n);
	return endless(n+1);
}

int main(void)
{
	unsigned long x = endless(1);	
	printf("Recursion terminated successfully, result is: x = %lu\n", x);
	return 0;
}

// What would happen if the depth of recursion were not constrained? Will line 11 ever be reached?
// Since the recursive functiob us missing an end condition, the program would run forever (or until it runs out of memory). Thus line 11 would neverbe reached.

// How many times will endless() be executed?