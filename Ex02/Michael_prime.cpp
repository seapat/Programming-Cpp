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

    bool isPrime = false;
    
    /*
    Implement the prime check here
    */
    
    if(num == 2) {
        isPrime = true;
    }
    else {
        isPrime = true;
        for(long long i = 3; i < num; i++) {
            if(num % i == 0) {
                cout << "found divisor: " << i << endl;
                isPrime = false;
            }
        }
    }

    cout << "The number " << num << " is a prime?: " << isPrime << endl;
    cout << "Calculation took: " << chrono::duration_cast<second_>
            (clock_::now() - start).count() << "s"  << endl << endl;

    /*
    Remove the block comment below
    */

    cout << "Optimized version" << endl << endl;
    start = clock_::now();
    
    isPrime = false;

    if(num == 2)
        isPrime = true;
    else if(num > 2 && num % 2 != 0) {
        isPrime = true;
        for (long long i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                cout << "found divisor: " << i << endl;
                isPrime = false;
                break;
            }
        }
    }


    cout << "The number " << num << " is a prime?: " << isPrime << endl; 
    cout << "Calculation took: " << chrono::duration_cast<second_>
            (clock_::now() - start).count() << "s"  << endl << endl;
}

/*
 * ==================
 * Results
 * ==================
 *
 * Trivial Version:
 *
 * The number 100000004987 is a prime?: 1
 * Calculation took: 485.119s
 *
 *
 * Optimized version
 * The number 100000004987 is a prime?: 1
 * Calculation took: 0.0009679s
 */