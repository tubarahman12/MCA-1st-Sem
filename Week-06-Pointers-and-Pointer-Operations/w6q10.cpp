#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter String: ";
    cin >> s;

    char *p = &s[0];

    int n = s.length();

    for (int i = 0; i < n / 2; i++) {
        char t = *p;
        *p = s[n - 1 - i];
        s[n - 1 - i] = t;

        p++;
    }

    cout << "Reversed String: " << s;

    return 0;
}

