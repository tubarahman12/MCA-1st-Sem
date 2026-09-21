#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter number of elements in the array: ";
	cin>>n;
    int arr[n];
    int *p = arr;
	cout << "Enter elements in the array : " ;
    for (int i = 0; i < n; i++) {
        cin >> *p;
        p++;
    }
    p=arr;
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

