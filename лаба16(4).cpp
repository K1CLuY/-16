#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int M, N;
    cout << "Введіть розміри матриці M та N: ";
    cin >> M >> N;

    vector<vector<int>> matrix(M, vector<int>(N));
    int num = 1; 

    for (int i = 0; i < M; ++i) {
        if (i % 2 == 0) { 
            for (int j = 0; j < N; ++j) {
                matrix[i][j] = num++;
            }
        }
        else { 
            for (int j = N - 1; j >= 0; --j) {
                matrix[i][j] = num++;
            }
        }
    }

    
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
