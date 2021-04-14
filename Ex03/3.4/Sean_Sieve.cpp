#include <iostream>
#include <array>

using namespace std;

int main() {

    //unsigned int k = 2;
    unsigned long int n = 2;
    
    
	cout << "Enter a maximum: ";
	cin >> n;
	cout << endl;
    

    // initialize array: all naturals are primes

    //size_t size = n + 1;
    bool* primes = new bool[n+1]{ false, false };
    for (long int i = 2; i < n; i++)
    {
        primes[i] = true;
    }
 
    // iteratively mark non-primes
    for (long int k = 2; k * k <= n; k++)
    {
        if (primes[k] == true)
            //cout << k;
        {
            for (long int j = k * 2; j <= n; j += k)
                primes[j] = false;
        }
    }

    /* 
    for (int i = 0; i < n; i++) {
        cout << primes[i] << "  ";
    }
    */
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (primes[i] == 1) {
            cout << i << "  ";
        }
        else {
            cout << "";
        }
    }
    cout << endl << "done";
    


    //build sum


}
