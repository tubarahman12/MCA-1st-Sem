#include <iostream>
using namespace std;

int main() {
    int m;

    cout << "Enter size of the array (m x m): ";
    cin >> m ;

    int arr1[m][m], arr2[m][m];

    cout << "Enter elements in arr1:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements in arr2:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr2[i][j];
        }
    }

    int sum[m][m];

    cout << "\nSum of the matrices:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    int product[m][m];

    cout << "\nProduct of the matrices:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            product[i][j] = 0;

            for (int k = 0; k < m; k++) {
                product[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

