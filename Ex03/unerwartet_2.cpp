#include <iostream>
int main() {
	int i = 0;
	{
		i = 3;
	}
	std::cout << i << std::endl;


	int index = 8;
	int sum = 0;
	while (index >= 4) {
		index -= 2;
		sum += index;
	}
	std::cout << sum << std::endl;

}
