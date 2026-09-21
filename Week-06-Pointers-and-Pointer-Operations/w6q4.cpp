#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter number a : ";
	cin>>a;
	int *p;
	p=&a;
	cout<<"Post Increment of a is : "<<(*p)++<<endl;
	cout<<"Pre Increment of a is : "<<++(*p)<<endl;
	cout<<"Pre Decrement of a is : "<<--(*p)<<endl;
	cout<<"Post Decrement of a is : "<<(*p)--<<endl;

	return 0;
}
