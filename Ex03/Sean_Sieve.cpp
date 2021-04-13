#include <iostream>

using namespace std;

int main() {

	int k = 2;
	int n = k;
	cout << "Enter a maximum: "
	cin >> n;
	cout << endl;

	int arr[n - k] = {};

	for (int i = 0; i < sizeof(arr); i++) {
		arr[i] = i + 1;
	}

}