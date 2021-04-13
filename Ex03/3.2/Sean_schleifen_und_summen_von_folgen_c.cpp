#include <iostream>
#include <cmath>

int main() {

	// TODO Test the Collatz-conjecture for the sequences that result from all
	// start values n = 1, ..., 10e6.
	
	unsigned long int max_length = 0;
	unsigned long int max_start = 0;
	
	// Your code here
	unsigned long int n = 1;
	const double END = pow(10, 6);

	// FIXME: Shit's not running...

	while (n <= END) {

		bool isConverged = false;
		long int one = 0;
		long int two = 0;
		long int three = 0;
	
		while (!isConverged) {

			if (one == 4 && two == 2 && three == 1) {
				 
				//n = 0;
				isConverged = true;
			}

			if (n % 2 == 0) {
				n = n / 2;
			}
			else {
				n = (3 * n) + 1;
			}

			one = two;
			two = three;
			three = n;
			
		}

		std::cout << n << std::endl;
		n++;
	}

	std::cout << "The Collatz conjecture is true for the first 10^6 start values." << std::endl;
	std::cout << "The longest sequences is created with n = " << max_start
		<< ". It produces " << max_length << " members." << std::endl;
}
