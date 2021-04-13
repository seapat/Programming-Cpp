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

		for (int i = 1; i <= n; i++) {
			piApprox += 1.0 / (i * i);
		}
		piApprox = sqrt(piApprox * 6);

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
		
		/* Calculate here */

		cout << "It takes " << i << " iterations to approximate Pi to: " << piApprox << endl;
		cout << "The difference is: " << pi - piApprox << " < " << epsilon << endl;
	}
}
