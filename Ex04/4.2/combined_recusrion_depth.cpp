#include <iostream>

// a)

// problematic line: 3 (in the exercise sheet)
// This function is missing a proper end condition, thus it will run endlessly until causing a stack overflow.
// An Option would be to terminate once n reaches zero (Obviously depends on what we want to achieve). 
// Alternatively we could also check whether, we should call function A again, or just return m
double functionA(int n) {
	//if (n == 0)
		//return 0;
	int m = n + 12;
	//if (n > 0)
		//m += functionA(n - 1) * 0.5;
	m += functionA(n - 1) * 0.5;
	return m;
}

// b)

// problematic line: 4 (in the exercise sheet)
// n is not reduced during function calls, thus also endless and will lead to a stack overflow as well
// As a solution we can use a ternary operator to increment or decrement the value of n until it reaches 0
double functionB(int n) {
	if (n == 0)
		return 42;
	return 2 + functionB(n); //functionB(n < 0? n+1 : n-1)
}

// c)
// 2 Issues:

// problematic line: 2 (in the exercise sheet)
// 1. The function returns 0 once n = 0
// 2. Hence, at some point, functionC is called with ( 0 - 1) or ( 0 - 2)
// 3. The end condition does not work because n < 0 and thus n == 0 is false.
// Solution: check for ( n < 0) instead

// Problematische Zeile: Zeile 4 (in der Angabe)
// The amount of frames grows exponentally with the power of 3 per iteration. This leads an very early stack overflow.
// This can be solved by either increasing the stack an reducing the amount of recursive calls: functionC(n-1) is computed twice for example.
// Another, better solution, is to implement an additional worker that utilizies an accumulator. This prevents countless open frames on the stack.
// Conveniently, this also leads to much faster execution, than just increasing the stack limits.
double functionC(int n) {
	if (n == 0) // ( n <= 0 )
		return 0;
	return functionC(n - 1) + functionC(n - 2) + functionC(n - 1); //call worker here
}


// Fixed Versions below:

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
	return 2 + fixedB(n < 0 ? n + 1 : n - 1);
}

double fixedC_worker(int n1, int n2, int n, int acc) {
	if (n <= 0)
		return 0;
	else if (acc >= n)
		return n1;

	std::cout << acc << std::endl;

	return fixedC_worker(n1 + n2 + n1, n1, n, acc + 1);
}

double fixedC(int n) {
	return fixedC_worker(0,0,n,0);
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