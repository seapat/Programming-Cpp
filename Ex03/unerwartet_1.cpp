#include <iostream>
int main() {
	int i;
	{
		i = 3;
		int j = 4;
	}
	i = j;
	std::cout << i << std::endl;
}
