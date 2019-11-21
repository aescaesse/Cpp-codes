### Polecenie
Pewien matematyk przedstawił następującą tezę:
Jeśli weźmiemy dowolną liczbę naturalną X, a następnie będziemy ją przekształcać według podanej niżej zależności, to zawsze prędzej czy później otrzymamy wartość jeden.

Zależność jest następująca
Jeśli X jest nieparzyste: X' = 3X + 1
Jeśli X jest parzyste: X' = 1/2X;

Przykład:
Dla X = 10 otrzymujemy taki ciąg wartości: 5,16,8,4,2,1

### Wejście
Program wczytuje liczbę naturalną X

### Wyjście
Program wyświetla po ilu przekształceniach mamy liczbę 1

Przykład
```
Wejście:
10

Wyjście:
6
```
### Rozwiązanie
```cpp
#include <iostream>
using namespace std;

int Przeksztalc(int x)
{
	int i = 0;
	while (x != 1)
	{
		i++;
		if (x % 2 == 0) x /= 2;
		else
			x = 3 * x + 1;
	}
	return i;
}
int main()
{
	unsigned int X;
	cin >> X;
	cout << Przeksztalc(X);
	return 0;
}
```