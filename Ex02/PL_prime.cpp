#include <iostream>
/* Only used for time measurements */
#include <chrono>
#include <cmath>
typedef std::chrono::high_resolution_clock clock_;
typedef std::chrono::duration<double, std::ratio<1> > second_;

using namespace std;



int main() {
    /* Read in the potential prime */
    cout << "Please enter a number: ";
    unsigned long long num;
    cin >> num;

    /* Start the time measurement */
    chrono::time_point<clock_> start = clock_::now();

    bool isPrime = true;

    if (num == 1) {
        isPrime = false;
    }

    for (unsigned long long i = 2 ; i <num; i++) {
        if (num % i == 0) {
            isPrime = false;

        }
    }
    
    cout << "The number " << num << " is a prime?: " << isPrime << endl; 
    /* Stop time measurement and output the duration */
    cout << "Calculation took: " << chrono::duration_cast<second_>
            (clock_::now() - start).count() << "s"  << endl << endl;


    cout << "Optimized version" << endl << endl;
    start = clock_::now();
    
    isPrime = true;

    if (num == 1) {
        isPrime = false;
    }

    for (unsigned long long i = 2 ; i < sqrt(num) + 1 ; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;

        }
    }


    cout << "The number " << num << " is a prime?: " << isPrime << endl; 
    cout << "Calculation took: " << chrono::duration_cast<second_>
            (clock_::now() - start).count() << "s"  << endl << endl;

}

/*
The number 4294967295 is a prime?: 0
Calculation took: 15.9347s

Optimized version

The number 4294967295 is a prime?: 0
Calculation took: 0.006505s

 */

