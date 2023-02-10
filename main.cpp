#include<iostream>
using namespace std;
int main()
{
	int matr[5][5];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			matr[i][j] = rand();
			cout << matr[i][j] << "\t";
		}
		cout << endl;
	}
}