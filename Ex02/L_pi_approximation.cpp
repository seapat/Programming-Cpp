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
		double nlimit = 1;
		double k = 1;
		double piApprox = 0; /* Save the result in this variable */

		cout << "Enter a number for the limit of n: ";
		cin >> nlimit;

		while (k <= nlimit) {
			piApprox = piApprox + (1 / pow(k, 2));
			k++;
		}

		piApprox = sqrt(piApprox * 6);//Umformen so das Pi alleine steht

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
		int k = 1;
		while (epsilon < (pi - piApprox)) {
			piApprox = piApprox + (1 / pow(k, 2));
			i++;
		}
		cout << "It takes " << i << " iterations to approximate Pi to: " << piApprox << endl;
		cout << "The difference is: " << pi - piApprox << " < " << epsilon << endl;
	}
}
