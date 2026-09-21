#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "Enter String: ";
	cin >> s;
    string *p = &s;
    cout << "String is : " << *p << endl;
    return 0;
}

