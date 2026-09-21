#include<iostream>
int main(){
    int n,a,b;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    a=0;
    b=1;
    std::cout << a <<"\n";
    std::cout << b <<"\n";
    for (int i=2;i<n;i++){
    	int t=a+b;
    	std::cout << t<<"\n";
    	a=b;
    	b=t;
	}
}
