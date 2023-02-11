//#include <iostream>
//using namespace std;
//int main()
//{
//	int array;
//	int max, max_i, max_j, min, min_i, min_j;
//	max,min = array[0][0];
//	max_i,min_i = 0;							
//	max_j,min_j = 0;
//	int N, M;
//	for (int i = 0; i < N; i++) {		
//		for (int j = 0; j < M; j++) {	
//			if (array[i][j] > max) {	
//				max = array[i][j];		
//				max_i = i;				
//				max_j = j;
//			}
//			if (array[i][j] < min)
//			{
//				min = array[i][j];
//				min_i = i;
//				min_j = j;
//			}
//		}
//	}
//	cout << "   Maximum:  " << max << endl;
//	cout << "   situated  " << max_i + 1 << " radok " << max_j + 1 << " stovb" << endl;
//	cout << "  Minimum:  " << min << endl;
//	cout << "   situated " << min_i + 1 << " radok " << min_j + 1 << " stovb" << endl;
//}
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void main() {
    int tmp;/*створюю тимчасову зміну*/
    const int rows = 4, cols = 5;/*створюю константу*/
    int ar[rows][cols];/*створюю цикл*/
    srand(time(0));/*створюю точку відліку для генеруваня рендомних чисел*/
    cout << "rows: " << rows << "\ncols: " << cols << "\n";
    for (int i = 0; i < rows; i++) {/*заповнюю масив рендомними числами*/
        for (int j = 0; j < cols; j++) {
            ar[i][j] = rand() % 101 - 50;
        }
    }
    for (int i = 0; i < rows; i++) {/*виводжу на екран початковий масив*/
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << ar[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    for (int a = 0; a < rows; a++) {/*сортую масив*/
        for (int i = 0; i < rows; i++) {
            for (int j = cols - 1; j > 0; j--) {
                if (true) {
                    if (ar [i - 1][j] > ar[i][j + 1]) {
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
    for (int i = 0; i < rows; i++) {/*виводжу на екран посортований масив*/
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << ar[i][j];
        }
        cout << "\n";
    }
    system("pause");
}