#include <iostream>
#include <cmath>


int main() {

	// TODO Test the Collatz-conjecture for the sequences that result from all
	// start values n = 1, ..., 10e6.
	
	unsigned long int max_length = 0;
	unsigned long int max_start = 0;
	
	// Your code here
    for(unsigned long int i = 1; i <= 1000000; i++) {
        
        unsigned long int length = 0;
        unsigned long int n = i;
        short found = 0;
        
        while(found != 7) {
            if(n == 4 || (n == 2 && found == 4) || (n == 1 && found == 6))
                found += n;
            else
                found = 0;

            if(n % 2 == 0)
                n = n/2;
            else
                n = 3*n+1;

            length++;
        }

        if(length >= max_length) {
            max_length = length;
            max_start = n;
        }
    }

	std::cout << "The Collatz conjecture is true for the first 10^6 start values." << std::endl;
	std::cout << "The longest sequences is created with n = " << max_start
		<< ". It produces " << max_length << " members." << std::endl;
}
