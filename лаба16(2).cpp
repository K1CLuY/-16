#include <iostream>


using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int N;
    cout << "Введіть розмір матриці N (N <= 10): ";
    cin >> N;

    if (N < 1 || N > 10) {
        cout << "Некоректний розмір матриці. N має бути в межах від 1 до 10.\n";
        return 1;
    }

    double A[10][10];
    int positiveCount;

    for (int i = 0; i < N; ++i) {
        positiveCount = 0;
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
            if (A[i][j] > 0) {
                positiveCount++;
            }
        }
        cout << "У рядку " << i << " знайдено " << positiveCount << " позитивних елементів." << endl;
    }

    return 0;
}

