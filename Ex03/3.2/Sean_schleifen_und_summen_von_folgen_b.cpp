#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {

	float result = 0;

	// TODO: Compute the Leibniz Formula
	for (int k = 0; k < pow(10, 6); k++) {
		double a_k = (pow(-1, k)) / ((2 * (double)k) + 1);
		result += (float)a_k;
	}


	// Output for the results
	std::cout << "Das Ergebniss der Reihe ist: " << result << std::endl;
	std::cout << "PI/4 ist: " << M_PI / 4.f << std::endl;
}
