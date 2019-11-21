### Polecenie 
# PTCLTZ - Problem Collatza
```
Dany jest ciąg xn określony rekurencyjnie:
x0=s,
xn+1=3*xn+1, jeśli xn jest nieparzyste i
xn+1=xn/2, jeśli xn jest parzyste

Napisz program, który oblicza pierwsze takie n, dla którego xn=1.
```
### Wejście
 
W pierwszej linii liczba testów t. W każdym z t kolejnych wierszy jedna liczba całkowita s, 1 <= s <= 10000.

### Wyjście
W każdej linii jedna liczba - obliczona wartość n.

Przykład
```
Wejście:
5
1 
2
8
3
567

Wyjście:
0
1
3
7
61
```
Rozwiązanie
```cpp
#include <iostream>
using namespace std;

int Collatz(int n)
{
	if (n == 1) return 0;
	if ((n % 2) == 0) return 1 + Collatz(n/2);
	else return 1 + Collatz(3 * n + 1);
}
int main()
{
	int t, s, i = 0, * arr;
	cin >> t;
	arr = new int[t];
	while (i < t)
	{
		cin >> arr[i];
		i++;
	}
	i = 0;
	while (i < t)
	{
		s = arr[i];
		cout << Collatz(s) << endl;
		i++;
	}
	return 0;
}

```