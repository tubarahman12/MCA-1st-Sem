#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter elements in the array: ";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	cout<<"elements in the array are: ";
	for(int i=0;i<n;i++){
    	cout << arr[i]<<" , ";
	}
    return 0;
}

