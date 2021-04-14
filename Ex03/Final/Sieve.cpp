#include <iostream>
#include <array>

int main() {

    // get n
    unsigned long int n = 2;
    std::cout << "Enter a maximum: ";
    std::cin >> n;
    std::cout << std::endl;

    // initialize array: all naturals are primes
    bool* primes = new bool[n + 1]{ false, false };
    for (long int i = 2; i < n; i++)
    {
        primes[i] = true;
    }

    // iteratively mark non-primes as false
    for (long int k = 2; k * k <= n; k++)
    {
        if (primes[k] == true)
        {
            for (long int j = k * 2; j <= n; j += k)
                primes[j] = false;
        }
    }

    //build sum from indices of all primes ( == true )
    long int sum = 0;
    for (int i = 0; i < n; i++) {
        if (primes[i]) {
            sum += i;
        }
    }
    std::cout << "The sum of all naturals, that are prime numbers, up to n is " << sum;

    // print values
    /*
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (primes[i] == 1) {
            cout << i << "  ";
        }
        else {
            cout << "";
        }
    }
    */


    delete[] primes;
}
