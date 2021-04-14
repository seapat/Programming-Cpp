#include <iostream>

int main() {
    // with for
    {
        // Compute sum over the first n natural numbers
        long unsigned int sum = 0;
        unsigned int n = 100;
        for (unsigned int i = 1; i <= n; i++) {
            sum += i;
        }
        std::cout << "The sum of all natural numbers from 1 to 100 is: " << sum <<
                  std::endl;
    }

	// with while
    {
        long unsigned int sum = 0;
        unsigned int n = 100;
        unsigned int i = 0;
        while (i <= n) {
            sum += i;
            i++;
        }
        std::cout << "The sum of all natural numbers from 1 to 100 is: " << sum <<
                  std::endl;
    }
}
