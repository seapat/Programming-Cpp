#include <iostream>
/* Only used for time measurements */
#include <chrono>
typedef std::chrono::high_resolution_clock clock_;
typedef std::chrono::duration<double, std::ratio<1> > second_;

using namespace std;

int main() {
    /* Read in the potential prime */
    cout << "Please enter a number: ";
    int num;
    cin >> num;
    int input;

    cout << "What do you want to do? please enter a number" << endl;
    cout << "(1) Sub.) a)" << endl;
    cout << "(>2) Sub.) b) " << endl;
    cin >> input;

    /* Start the time measurement */
    chrono::time_point<clock_> start = clock_::now();

    bool isPrime = false;

    /*
    Implement the prime check here
   
   a) */
    if (input == 1) {
        int i = 2;
        while (i < num) {
            if (num % i != 0) {
                isPrime = true;
                break;
            }
            else {
                isPrime = false;
            }

            i++;
        }
    }

    //b) alle Zahlen können mit den Primzahlen < 10 dargestellt werden
    else {
        if (num == 2 || num == 3 || num == 5 || num == 7) {
            isPrime = true;
        }
        else {
            if (!(num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)) {
                isPrime = true;
            }
        }
    }

    cout << "The number " << num << " is a prime?: " << isPrime << endl;
    /* Stop time measurement and output the duration */
    cout << "Calculation took: " << chrono::duration_cast<second_>
        (clock_::now() - start).count() << "s" << endl << endl;

    /*
    c) 100000004987 is a prime
    */
}
