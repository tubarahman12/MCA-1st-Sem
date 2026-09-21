#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3,5, 4, 56, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
	int j=n-1;
    for(int i=0;i<n/2;i++){
    	int t=arr[i];
    	arr[i]=arr[j];
    	arr[j]=t;
    	j--;
	}
	cout<<"elements in the array are: ";
	for(int i=0;i<n;i++){
    	cout << arr[i]<<" , ";
	}
    return 0;
}

