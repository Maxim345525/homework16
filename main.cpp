#include <iostream>
using namespace std;
int main()
{
    char Matr[9][9];
    Matr[2][5] = 3;
    int i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            Matr[i][j] = 7;
        }
    }
}
