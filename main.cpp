#include <iostream>
#include <ctime>


using namespace std;
int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    int n = 4;
    int max_i, max = 0;
    int min_i, min = 0;
    int** matr = new int* [n];
    for (int i = 0; i < n; i++)
        matr[i] = new int[n];

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            matr[i][k] = rand() / 1000;
            cout << matr[i][k] << " ";
        }
        cout << endl;
    }

    int* temp = new int[n];
    for (int k = 0; k < n; k++)
    {
        for (int i = k; i < n; i++)
        {
            if (matr[i][k] > max) 
            {
                max = matr[i][k];
                max_i = i;
            }
            if (matr[i][k] < min)
            {
                min = matr[i][k];
                min_i = i;
            }
        }
        while (matr[k] != -858993460);
        cout << endl;
        k = 0;
        cout << "Номер строки: " << max_i << endl;
        cout << "Номер строки: " << min_i << endl;

    }

    cout << endl;
    system("pause");
    return 0;
}