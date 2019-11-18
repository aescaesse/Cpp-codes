```c++
#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
#define size 8

using namespace std;

void DisplayMatrix(int matrix[][size])
{
	for (int i = 0; i < size; i++)
	{
		cout << "|";
		for (int j = 0; j < size; j++)
			cout << setw(5) << matrix[i][j];
		cout << setw(3) << "|" << endl;
	}
	cout << endl;
}

void SortMatrix(int matrix[][size])
{
	int swapped = 1;
	while (swapped)
	{
		swapped = 0;
		for (int i = size - 1; i >= 0; i--)
			for (int j = size - 1; j >= 0; j--)
			{
				if (i >= 0 && matrix[i][j] < matrix[i - 1][j])
				{
					swap(matrix[i][j], matrix[i - 1][j]); swapped = 1;
				}
				if (j >= 0 && matrix[i][j] < matrix[i][j - 1])
				{
					swap(matrix[i][j], matrix[i][j - 1]); swapped = 1;
				}
			}
		if (swapped == 0) break;
	}
}


using namespace std;

int main() {
	srand(time(NULL));
	int matrix[size][size]{};
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrix[i][j] = rand() % 100;
	DisplayMatrix(matrix);
	SortMatrix(matrix);
	DisplayMatrix(matrix);

	return 0;
}
```
```
output:
|   83   78   32   70   90   69   65   98  |
|    0   36   87   90    9   35    8    3  |
|   89   41   94   14    4   43   28   87  |
|   70   22   52   54   92   13   64   35  |
|   52   70   57   36   76   47   16   79  |
|   82   28   16   75   95   27    2   23  |
|   57   73   27    6   85   47   79   26  |
|    9   90   94   15   58   95   52   46  |

|    0    4    6    8    8    8    9    9  |
|   13   14   15   16   16   22   23   26  |
|   27   27   28   28   32   35   35   36  |
|   36   41   43   46   47   47   52   52  |
|   52   54   57   57   58   64   65   69  |
|   70   70   70   73   75   76   78   79  |
|   79   82   83   85   87   87   89   90  |
|   90   90   92   94   94   95   95   98  |
```