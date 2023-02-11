
#include<iostream>
using namespace std;
int main()
{
	const int n = 4;
	int arr[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";

		}
		cout << endl;
	}
	cout << "Main diagonal:";
	int min, max;
	min = max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				cout << arr[i][j] << " ";
				if (arr[i][j] < min)
				{
					min = arr[i][j];
				}
				if (arr[i][j] > max)
				{
					max = arr[i][j];
				}
			}
		}
	}
	cout << "min:" << min << endl;
	cout << "max:" << max << endl;
}