#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double pi = 3.141592;

	/* 
	a)
	*/
	{
	    int n;
	    cout << "Input for n: ";
	    cin >> n;

        double sum = 0;

        for (int i=1 ; i <= n ; i++) {
            sum = (1.0/pow(i, 2))+ sum;
        }
		double piApprox = sqrt(sum * 6); /* Save the result in this variable */

		cout << "Pi is approximately: " << piApprox << endl;
		cout << "The difference is: " << pi - piApprox << endl;
	}

	/* 
	b)
	*/
	{
		double piApprox = 0; /* Save the result in this variable */
		double epsilon = 0.0001;
		int i = 0; /* Write the amount of iterations needed in this variable */
		double sum = 0;
		
		/* Calculate here */

		while(abs(pi-sqrt(sum*6)) > epsilon) {
		    sum += 1.0/pow(i+1, 2);
		    i += 1;
		}

		piApprox = sqrt(sum * 6);

		cout << "It takes " << i << " iterations to approximate Pi to: " << piApprox << endl;
		cout << "The difference is: " << pi - piApprox << " < " << epsilon << endl;
	}
}
/*
 * c) console for epsilon= 0.00001 : It takes 89635 iterations to approximate Pi to: 3.14158
    The difference is: 9.9999e-006 < 1e-005
 *
 */