#include<iostream>
int main(){
    char c;
    std::cout<<"Enter a character: ";
    std::cin>>c;
    int n=(int)c;
    if (n>=65 && n<=90){
    	std::cout<<"Capital letter";
	}
	else if(n>=97 && n<=122){
		std::cout<<"Small letter";
	}
	else if(n>=48 && n<=57){
		std::cout<<"Digit";
	}
	else if((n>=10 && n<=47)||(n>=58 && n<=64)||(n>=91 && n<=96)||(n>=123 && n<=127)){
		std::cout<<"Special Symbol";
	}
	else{
		std::cout<<"Invalid input";
	}
	return 0;
}
