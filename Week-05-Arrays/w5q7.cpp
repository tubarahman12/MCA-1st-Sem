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
	int p,ne,o,e;
	p=ne=o=e=0;
	for (int i=0;i<n;i++){
		if(arr[i]<0){
			ne++;
		}
		else {
			p++;
		}
		if(arr[i]%2==0){
			e++;
		}else{
			o++;
		}
	}
	cout<<"Positive = "<<p<<endl;
	cout<<"Negative = "<<ne<<endl;
	cout<<"Even = "<<e<<endl;
	cout<<"Odd = "<<o<<endl;
    return 0;
}

