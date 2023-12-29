#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    const int ROWS = 3;
    const int COLUMNS = 5;
    double s[ROWS][COLUMNS];
    vector<double> d(COLUMNS, INT_MIN);

    
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            cin >> s[i][j];
            
            if (s[i][j] < 0 && s[i][j] > d[j]) {
                d[j] = s[i][j];
            }
        }
    }

    
    for (int j = 0; j < COLUMNS; ++j) {
        
        if (d[j] == INT_MIN) {
            cout << "У стовпчику " << j << " немає негативних елементів." << endl;
        }
        else {
            cout << d[j] << " ";
        }
    }
    cout << endl;

    return 0;
}
