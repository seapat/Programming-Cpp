#include <iostream>
#include <cmath>

int main() {

	// TODO Test the Collatz-conjecture for the sequences that result from all
	// start values n = 1, ..., 10e6.
	
	unsigned long int max_length = 0;
	unsigned long int max_start = 0;
	
	// Your code here



	std::cout << "The Collatz conjecture is true for the first 10^6 start values." << std::endl;
	std::cout << "The longest sequences is created with n = " << max_start
		<< ". It produces " << max_length << " members." << std::endl;
}
