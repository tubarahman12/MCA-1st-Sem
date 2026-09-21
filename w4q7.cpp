#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter a, b, c for quadratic equation ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;
    int d = (b * b) - (4 * a * c);
	if (d > 0) {
        float r1 = (-b + sqrt(d)) / (2.0 * a);
        float r2 = (-b - sqrt(d)) / (2.0 * a);
        cout << "There are two roots: " << r1 << " " << r2 << ".";
    }
    else if (d == 0) {
        float r = -b / (2.0 * a);
        cout << "There is one root: " << r;
    }
    else {
        cout << "Imaginary roots";
    }
    return 0;
}

