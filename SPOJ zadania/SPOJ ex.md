# Zadania z pliku https://github.com/aescaesse/Studia/blob/master/PP-lista1.pdf
### Zadanie 1

```cpp
#include <iostream>
#include <iomanip>
#define PI 3.141592654
using namespace std;

int main()
{
	double r = 0, d = 0, S;
	cout << fixed << setprecision(2);
	cin >> r >> d;
	while (((r < 1 || r>2000) && (d < 1 || d>2000)) || (d >= 2 * r))
		cin >> r >> d;
	S = (r * r - (d * d) / 4) * PI;
	cout << S;

	return 0;
}
```

### Zadanie 2

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
int reversed = 0, n, m, Check, CheckL;
void Reverse()
{
	m = n;
	reversed = 0;
	while (m != 0)
	{
		int last = m % 10;
		reversed = reversed * 10 + last;
		m /= 10;
	}
}
void AddReversed()
{
	n += reversed;
}
int IsPalindrome()
{
	unsigned long long int k = n;
	m = k;
	Check = 0;
	while (m != 0)
	{
		CheckL = m % 10;
		Check = Check * 10 + CheckL;
		m /= 10;
	}
	if (k == Check)
		return 1;
	else
		return 0;
}
void Core()
{
	int i = 0;
	while (!IsPalindrome())
	{
		Reverse();
		AddReversed();
		i++;
	}
	cout << n << " ";
	cout << i;
}
int main()
{
	cin >> n;
	Core();
	return 0;
}
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
		else if (B > A)
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