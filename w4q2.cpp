#include <iostream>
int main(){
	int a,b;
	std::cout<<"Enter two number: ";
	std::cin>>a>>b;
	while (b!=0){
	int carry=(a&b)<<1;
	a^=b;
	b=carry;
	}
	std::cout << "sum is " << a << std::endl;
	return 0;
}
