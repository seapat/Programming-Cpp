
#include <iostream>


double functionA(int n) {
	int m = n + 12;
	m += functionA(n - 1) * 0.5;
	return m;
	
}

double functionB(int n) {
	if (n == 0)
		return 42;
	return 2 + functionB(n);
}

double functionC(int n) {
	if (n == 0)
		return 0;
	return functionC(n - 1) + functionC(n - 2) + functionC(n - 1);
}



int main() {
	functionA(2);
	functionB(2);
	functionC(10048);
}