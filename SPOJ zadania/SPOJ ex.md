# Zadania z pliku https://github.com/aescaesse/Studia/blob/master/PP-lista1.pdf
### Zadanie 1

```cpp

```

### Zadanie 2

```cpp

```

### Zadanie 3

```cpp
#include <iostream>
using namespace std;
int CzySa(int A, int B)
{
	return A > 0 && B > 0 && B!=A;
}
int main()
{
	int A, B;
	cin >> A >> B;
	while (CzySa(A, B))
	{
		if (A > B)
			A -= B;
		else
			B -= A;
	}
	cout << A<<" " << B;
	return 0;
}
```

### Zadanie 4

```cpp
#include <iostream>
using namespace std;

bool sprawdz(int p)
{
	if (p < 10000000000 || p>99999999999) return false;
	int m[11] = { 1,3,7,9,1,3,7,9,1,3,1 };
	int Suma = 0, i = 0;
	while (p < 0)
	{
		int liczba = 0;
		liczba = p % 10;
		liczba *= m[i];
		Suma += liczba;
		p /= 10;
		i++;
	}
	if (Suma % 10 == 0)
		return true;
	else
		return false;
}
int main()
{
	int pesel;
	cin >> pesel;
	if (sprawdz(pesel))
		cout << "OK";
	else
		cout << "ERROR";
	return 0;
}
```

### Zadanie 5

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