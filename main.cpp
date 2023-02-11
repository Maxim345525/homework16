#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void main() {
    int tmp;
    const int rows = 4, cols = 5;
    int ar[rows][cols];
    srand(time(0));
    cout << "rows: " << rows << "\ncols: " << cols << "\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            ar[i][j] = rand() % 101 - 50;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << ar[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    for (int a = 0; a < rows; a++) {
        for (int i = 0; i < rows; i++) {
            for (int j = cols - 1; j > 0; j--) {
                if (true) {
                    if (ar[i - 1][j] > ar[i][j + 1]) {
                        tmp = ar[i - 1][j];
                        ar[i - 1][j] = ar[i][j + 1];
                        ar[i][j + 1] = tmp;
                    }
                }
                if (ar[i][j - 1] > ar[i][j]) {
                    tmp = ar[i][j];
                    ar[i][j] = ar[i][j - 1];
                    ar[i][j - 1] = tmp;
                }
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << ar[i][j];
        }
        cout << "\n";
    }
    system("pause");
}