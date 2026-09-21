#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter number a : ";
	cin>>a;
	int *p;
	p=&a;
	cout<<"Address of the variable a is : "<<p;
}
