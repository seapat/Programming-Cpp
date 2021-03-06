#include <iostream>
/* Only used for time measurements */
#include <chrono>
typedef std::chrono::high_resolution_clock clock_;
typedef std::chrono::duration<double, std::ratio<1> > second_;

using namespace std;

int main() {

		/* Read in the potential prime */
		cout << "Please enter a number: ";
		long long num;
		cin >> num;

		/* Start the time measurement */
		chrono::time_point<clock_> start = clock_::now();

		bool isPrime = true;

		if (num == 1) {
			isPrime = false;
		}

		/*
		Implement the prime check here
		*/

		for (long long i = 2; i < num; i++) {

			if ((num % i) == 0) {
				isPrime = false;
			}
		}
		
		cout << "The number " << num << " is a prime?: " << isPrime << endl;
		/* Stop time measurement and output the duration */
		cout << "Calculation took: " << chrono::duration_cast<second_>
			(clock_::now() - start).count() << "s" << endl << endl;

	

	/*
	Remove the block comment below
	*/

		cout << "Optimized version" << endl << endl;
		start = clock_::now();

		isPrime = true;

		if (num == 1) {
			isPrime = false;
		}

		for (long long i = 2; i < num / 2 + 1; i++) {

			if ((num % i) == 0) {
				isPrime = false;
			}
		}


		cout << "The number " << num << " is a prime?: " << isPrime << endl;
		cout << "Calculation took: " << chrono::duration_cast<second_>
		(clock_::now() - start).count() << "s" << endl << endl;
}

/*
2.3 c)
The number 100000004987 is a prime?: 1
Calculation took: 1165.57s

Optimized version

The number 100000004987 is a prime?: 1
Calculation took: 800.634s
*/
