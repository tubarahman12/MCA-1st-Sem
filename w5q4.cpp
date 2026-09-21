#include <iostream>
using namespace std;

int secondLargest(int* arr, int n) {
    int max = -1;
    int second = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {1, 2, 3, 4, 56, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << secondLargest(arr, n);

    return 0;
}

