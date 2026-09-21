#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 56,56, 6,6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int num;
    cout<<"Enter the number whose frequency you want to find: ";
    cin>>num;
    int c=0;
    for(int i=0;i<n;i++){
    	if (arr[i]==num){
    		c++;
		}
	}
	cout<<"Number of times "<<num<<" occur in the array is "<<c;

    return 0;
}

