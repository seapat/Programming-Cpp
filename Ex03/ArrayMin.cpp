#include <iostream>

using namespace std;

int arrMin(int array[]) {

	int min = 100;
	
	//int i = 0;

	for (int i = 0; i <= sizeof(*array); i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}

	
	return min;
}

int main() {

	int arr[5] = { 3 , -1 ,4 , -2 ,0 };
	//int *p = arr;

	int min = arrMin(arr);
	cout << "min value is: " << min;
	return 0;
}