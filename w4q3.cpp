#include <iostream>
int main(){
	int a,b,c,d,e,f,g;
	std::cout<<"Enter numbers a,b,c,d,e,f,g: ";
	std::cin>>a>>b>>c>>d>>e>>f>>g;
	int ans=((a+b/c*d-e)*(f-g));
	std::cout<<"Your ans of the expression ((a+b/c*d-e)*(f-g)) is "<<ans;
	return 0;
}
