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
