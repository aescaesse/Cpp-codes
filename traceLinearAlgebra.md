### Trace in linear algebra
In linear algebra, the trace (often abbreviated to tr) of a square matrix A is defined to be the sum of elements on the main diagonal (from the upper left to the lower right) of A.

![](https://latex.codecogs.com/gif.latex?%5Cmathrm%7BTr%7D%28A%29%20%3D%20%5Csum_%7Bi%3D1%7D%5E%7Bn%7D%20a_%7Bi%20%5C%2C%20i%7D)
 
```c++
#include <iostream>
#include <iomanip>
#include <ctime>
#define size 5
using namespace std;

void DisplayMatrix(int A[][size])
{
	for (int i = 0; i < size; i++)
	{
		cout << "|";
		for (int j = 0; j < size; j++)
			cout << setw(5) << A[i][j];
		cout<<setw(3)<<"|"<< endl;
	}
}

int Trace(int A[][size])
{
	int Sum = 0;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (i == j)
				Sum += A[i][j];
	return Sum;
}
int main()
{
	srand(time(NULL));
	int A[size][size]{};
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			A[i][j] = rand() % 100;
	DisplayMatrix(A);
	cout << "Trace = " << Trace(A);
	return 0;
}
```

```
output:
|   53    7    8   61   52  |
|   26   26   83   65   36  |
|   52   34   17   20   54  |
|    0   43   33   24   10  |
|   50   87   48   17   54  |
Trace = 174
```
