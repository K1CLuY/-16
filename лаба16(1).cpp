#include <iostream>
#include <climits>

using namespace std;

const int SIZE = 5;

int main() {
    setlocale(LC_ALL, "rus");
    int s[SIZE][SIZE];
    int maxInColumn[SIZE];

    for (int j = 0; j < SIZE; ++j) {
        maxInColumn[j] = INT_MIN;
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "Введіть елемент [" << i << "][" << j << "]: ";
            cin >> s[i][j];
            if (s[i][j] > maxInColumn[j]) {
                maxInColumn[j] = s[i][j];
            }
        }
    }

    for (int j = 0; j < SIZE; ++j) {
        for (int i = 0; i < SIZE; ++i) {
            if (s[i][j] == 0) {
                s[i][j] = maxInColumn[j];
            }
        }
    }

    cout << "Змінена матриця:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
