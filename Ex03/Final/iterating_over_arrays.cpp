#include <iostream>

int main() {
    int arr[5] = {3, -1, 4, -2, 0};

    int min = INT32_MAX;
    int minIndex = -1;
    for(int i = 0; i < (sizeof(arr)/sizeof(*arr)); i++) {
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    std::cout << "The arrays minimum value is at index " << minIndex << " with value " << arr[minIndex] << std::endl;

    return 0;
}

