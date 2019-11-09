### Bułki
Limit pamięci: 64 MB
Maciuś codziennie rano chodzi do piekarni po bułki. Chłopiec wyznaje zasadę, że liczba bułek, które kupuje, zawsze musi być potęgą dwójki. Dodatkowo, zakup  bułek Maciuś łączy zawsze z zakupem  lizaków. Niestety mama Maciusia nie może tego zrozumieć i liczba bułek, które każe mu kupić nie zawsze jest potęgą dwójki. Jeśli tak nie jest, chłopiec kupuje więcej bułek niż zamawiała mama - liczba kupowanych przez niego bułek to najmniejsza potęga dwójki niemniejsza od liczby bułek zamawianych przez mamę.

Tak więc, gdy np. mama Maciusia zamówi 8 bułek, chłopiec posłusznie kupi 8 bułek i 3 lizaki. Jednak gdyby mama zamówiła 9 bułek, Maciuś musiałby kupić już 16 bułek i 4 lizaki.

Dla danej liczby bułek zamawianych przez mamę wyznacz, ile lizaków kupi Maciuś.

Wejście
W pierwszej linii wejścia znajduje się jedna liczba całkowita B (1 <= B <= 1000 000 000) oznaczająca liczbę bułek zamówionych przez mamę Maciusia.

Wyjście
Program powinien wypisać jedną liczbę oznaczającą liczbę lizaków zakupionych przez Maciusia.

Przykład
Dla danych wejściowych:
```
9
```
poprawną odpowiedzią jest:
```
4
```

Rozwiązanie:
```c++
#include <iostream>
#include <cmath>
using namespace std;

int IleLizakow(int n)
{
	int ile = 0;
	while (pow(2, ile) < n)
		ile++;
	return ile;
}

int main() 
{
	int n;
	cin >> n;
	cout << IleLizakow(n);
	return 0;
}
```
