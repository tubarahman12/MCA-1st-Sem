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
	int sum=0;
	cout<<"Sum of elements in the array is: ";
	for(int i=0;i<n;i++){
    	sum+=arr[i];
	}
	cout<<sum;
    return 0;
}

