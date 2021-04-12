#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double pi = 3.141592;

	/* 
	a)
	*/
	{
		/* Calculate here */
		double piApprox = 0; /* Save the result in this variable */
		int n = 40000;

		double series = 0;
		for(int i = 1; i <= n; i++) {
            series += 1.0/(i*i);
		}
		piApprox = sqrt(series * 6);

		cout << "Pi is approximately: " << piApprox << endl;
		cout << "The difference is: " << pi - piApprox << endl;
	}

	/* 
	b)
	*/
	{
		double piApprox = 0; /* Save the result in this variable */
		double epsilon = 0.00001;
		int i = 0; /* Write the amount of iterations needed in this variable */

		double series = 0;
		while(abs(pi - piApprox) > epsilon) {
            i++;
            series += 1.0/(i*i);
            piApprox = sqrt(series * 6);

            if(isinf(piApprox)) {
                cout << "approximation reached infinity" << endl;
                break;
            }
		}
		/* Calculate here */

		cout << "It takes " << i << " iterations to approximate Pi to: " << piApprox << endl;
		cout << "The difference is: " << pi - piApprox << " < " << epsilon << endl;

		/*
		to c)
		-------------
		 The approximation becomes infinity. The reason for this is, that the float precision is too limited and therefore
		 never gets closer than 0.00001 to pi.
		*/
	}
}
