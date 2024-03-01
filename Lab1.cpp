#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Введіть кількість рядків: ";
    cin >> n;


    for (int i = 1; i <=n; i++) {
        for (int j = i; j <n; j++) {
            cout << ' ';
        }


        for (int d = 1; d<=i; d++) {

            cout << d;
            
        }

        for (int r = 1; r < i; r++) {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}