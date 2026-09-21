#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int num=n;
    int c=0;
    while(n!=0){
    	c++;
    	n/=10;
	}
	n=num;
	int sum=0;
	while(n!=0){
		int r=n%10;
		sum+=pow(r,c);
		n/=10;
	}
	if (num==sum){
		cout<<num <<" is a Armstrong Number.";
	}else{
	cout<<num <<" is not a Armstrong Number.";		
	}
    return 0;
}

