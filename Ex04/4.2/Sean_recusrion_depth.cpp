#include <iostream>

// This function is missing a proper end condition, thus it wil cause a stack overflow.
// An Option would be to terminate once n reaches zero (Obviously depends on what we want to achieve):
double functionA(int n) {
	//if (n == 0)
		//return 0;
	int m = n + 12;
	m += functionA(n - 1) * 0.5;
	return m;
}

// n is not reduced during function calls, thus also endless and will lead to a stack overflow as well
// Example solution would be to reduce n by one with each recursive call:
double functionB(int n) {
	if (n == 0) //(n < 0)
		return 42;
	return 2 + functionB(n); //return 2 + functionB(n-1);
}

// 1. THe function returns 0 once n = 0
// 2. Hence, at some point, functionC is called with ( 0 - 1) or ( 0 - 2)
// 3. The end condition does not work because n < 0 and thus n == 0 is false.
// Solution: check for ( n < 0) instead

// Additionally, for the value given in the main function, the stack seems to simply be too small to handle the amount of recursive calls (growing exponentially at n^3)
// This can be solved by either increasing the stack or reducing the amount of recursive calls: functionC(n-1) is computed twice for example.
double functionC(int n) {
	if (n == 0) // ( n <= 0 )
		return 0;
	return functionC(n - 1) + functionC(n - 2) + functionC(n - 1); // return (2 * functionC(n - 1)) + functionC(n - 2);
}



double fixedA(int n) {
	if (n == 0)
		return 0;
	int m = n + 12;
	m += fixedA(n - 1) * 0.5;
	return m;
}

double fixedB(int n) {
	if (n == 0)
		return 42;
	return 2 + fixedB(n - 1);
}

double fixedC(int n) {

	if ( n <= 0 )
		return 0;
	return (2 * fixedC(n - 1)) + fixedC(n - 2);
}



int main() {
	//functionA(2);
	//functionB(2);
	//functionC(10048);

	fixedA(2);
	fixedB(2);
	fixedC(2);
	fixedC(10048);
}