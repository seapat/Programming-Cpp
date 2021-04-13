#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {

	float result = 0;

	// TODO: Compute the Leibniz Formula

	int n = 1000000;

    for(int k = 0; k < n; k++){
        double ak = pow(-1, k) / (double)(2*k + 1);
        result += ak;
    }


	// Output for the results
	std::cout << "Das Ergebniss der Reihe ist: " << result << std::endl;
	std::cout << "PI/4 ist: " << M_PI / 4.f << std::endl;
}
