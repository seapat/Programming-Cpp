#include <iostream>

int main() {
	// Compute sum over the first n natural numbers
	long unsigned int sum = 0;
	unsigned int n = 100;
	for (unsigned int i = 1; i <= n ; i++) {
		sum += i;
	}
	std::cout << "The sum of all natural numbers from 1 to 100 is: " << sum <<
		std::endl;
	
	// TODO: Convert the for loop to a while loop!

	// Compute sum over the first n natural numbers
	sum = 0;
	n = 100;

	unsigned int i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}

	std::cout << " The sum of all natural numbers from 1 to 100 is: " << sum <<
		std::endl;
}
