
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
	if (n == 0)
		return 42;
	return 2 + functionB(n); //return 2 + functionB(n-1);
}


double functionC(int n) {
	if (n == 0)
		return 0;
	return functionC(n - 1) + functionC(n - 2) + functionC(n - 1);
}



int main() {
	//functionA(2);
	//functionB(2);
	functionC(10048);
}