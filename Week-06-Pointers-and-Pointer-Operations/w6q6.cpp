#include <iostream>
using namespace std;
int main() {
    string s1,s2;
    cout << "Enter String1: ";
	cin >> s1;
	cout << "Enter String2: ";
	cin >> s2;
    string *p = &s1;
    string *q = &s2;
    cout << "Concatenation of the 2 string is : " << (*p)+" "+ (*q) << endl;
    return 0;
}

