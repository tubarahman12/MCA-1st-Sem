#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter 2 numbers a and b : ";
	cin>>a>>b;
	int *p,*q;
	p=&a;q=&b;
	cout<<(*p+*q);
}
