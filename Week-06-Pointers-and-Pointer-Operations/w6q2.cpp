#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter 2 numbers a and b : ";
	cin>>a>>b;
	cout<<"Numbers before Swap: ";
	cout<<a<<" , "<<b<<endl;
	int *p,*q;
	p=&a;q=&b;
	int t=*p;
	*p=*q;
	*q=t;
	cout<<"Numbers after Swap: ";
	cout<<a<<" , "<<b<<endl;
}
