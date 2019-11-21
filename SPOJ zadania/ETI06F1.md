## Polecenie 
# ETI06F1 - Pole pewnego koła
Wyznacz pole koła, którego okrąg jest przecięciem dwóch identycznych sfer o promieniu r. Odległość pomiędzy środkami sfer wynosi d. Wartości r oraz d podane na wejściu są liczbami zmiennoprzecinkowymi. Można założyć, że *1 <= d < 2 * r <= 2000*.

Ilustracja pomocnicza treści
<img src="ETI06F1_1.jpg" />
Wejście
Na wejściu podane są dwie liczby zmiennoprzecinkowe r d oddzielone spacją, oznaczające odpowiednio promień sfery i odległość między środkami sfer.

Wyjście
Należy wypisać pojedynczą liczbę zmiennoprzecinkową S oznaczającą pole koła. Dopuszczalny błąd wyniku wynosi 0.01.

Uwaga. W roli separatora dziesiętnego należy używać kropki (nie: przecinka). Można przyjąć, że stosunek obwodu koła do jego średnicy wynosi 3.141592654.


### Przykład
```
Przykład 1

Wejście:
10 10

Wyjście:
235.62

Przykład 2

Wejście:
1000 1500

Wyjście:
1374446.79
```

### Rozwiązanie
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