#include <iostream>
using namespace std;
int main()
{
	int array;
	int max, max_i, max_j, min, min_i, min_j;
	max,min = array[0][0];
	max_i,min_i = 0;							
	max_j,min_j = 0;
	int N, M;
	for (int i = 0; i < N; i++) {		
		for (int j = 0; j < M; j++) {	
			if (array[i][j] > max) {	
				max = array[i][j];		
				max_i = i;				
				max_j = j;
			}
			if (array[i][j] < min)
			{
				min = array[i][j];
				min_i = i;
				min_j = j;
			}
		}
	}
	cout << "   ������������ �������:  " << max << endl;
	cout << "   ³� ����������� �  " << max_i + 1 << " ����� �� " << max_j + 1 << " �������" << endl;
	cout << "   ������������ �������:  " << min << endl;
	cout << "   ³� ����������� �  " << min_i + 1 << " ����� �� " << min_j + 1 << " �������" << endl;
}
