### Polecenie
# JPESEL - Pesel

Jan Kowalski musi wpisać do systemu szpitalnego dane osobowe pacjenta, oprócz imienia i nazwiska musi również wpisać PESEL pacjenta. Jakież było jego zdziwienie, gdy spostrzegł, że pewnych pacjentów system nie przyjmował z powodu wadliwego PESELu.

Twoim zadaniem jest sprawdzenie, czy podana liczba 11-cyfrowa jest poprawnym PESELem.

Aby sprawdzić czy dany PESEL jest prawidłowy należy wykonać następujące działania:

Pierwszą cyfrę mnożymy przez 1,
drugą cyfrę mnożymy przez 3,
trzecią cyfrę mnożymy przez 7,
czwarta cyfrę mnożymy przez 9,
piątą cyfrę mnożymy przez 1,
szóstą cyfrę mnożymy przez 3,
siódmą cyfrę mnożymy przez 7,
ósmą cyfrę mnożymy przez 9,
dziewiątą cyfrę mnożymy przez 1,
dziesiątą cyfrę mnożymy przez 3,
jedenastą cyfrę mnożymy przez 1.

Tak uzyskane 11 iloczynów dodajemy do siebie. Jeśli ostatnia cyfra tej sumy jest zerem to podany PESEL jest prawidłowy. Przykład dla numeru PESEL 44051401458

4*1 + 4*3 + 0*7 + 5*9 + 1*1 + 4*3 + 0*7 + 1*9 + 4*1 + 5*3 + 8*1 = 4 + 12 + 0 + 45 + 1 + 12 + 0 + 9 + 4 + 15 + 8 = 110

Źródło: www.wikipedia.pl

Jeśli suma jest większa od zera, wtedy sprawdzamy jej poprawność. W przeciwnym przypadku nr PESEL jest błędny. Ponieważ ostatnia cyfra liczby 110 jest zerem więc podany PESEL jest prawidłowy.

### Wejście 
Program wczytuje jedną 11-cyfrową liczbę

### Wyjście
Program wyświetla napis OK jeśli wpisana liczba jest poprawnym numerem PESEL, w przeciwnym wypadku wyświetla napis "ERROR".

### Rozwiązanie
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
	if (Suma <= 0) return false;
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