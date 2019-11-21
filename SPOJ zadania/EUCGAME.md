### Polecenie
# EUCGAME - Gra Euklidesa
Gra Euklidesa przebiega według następujących zasad:

W grze bierze udział dwóch graczy (A i B). Początkowo każdy z nich dysponuje pewną niezerową liczbą identycznych żetonów - odpowiednio a i b.
Jeżeli jeden z graczy ma mniej żetonów niż drugi, może wykonać ruch. Wykonując ruch, gracz zabiera partnerowi tyle żetonów, ile sam posiada. Żetony te są wyłączone z dalszej gry (tj. gracz wykonujący ruch ich nie przejmuje).
Gra kończy się w sytuacji, gdy żaden z graczy nie może wykonać ruchu (w szczególności gra może skończyć się bezpośrednio po "rozdaniu" żetonów, bez jakichkolwiek ruchów).
Znając początkowe zasoby graczy (tj. wartości a i b), wyznacz łączną liczbę żetonów pozostałych w grze w chwili jej zakończenia.

### Wejście
Program wczytuje dwie liczby całkowite oznaczające początkowe liczby żetonów u graczy

### Wyjście
Program wyświetla łączną liczbę żetonów obu graczy po zakończeniu gry



Przykład
```
Wejście
12 5

Wyjście:
1 1
```

### Rozwiązanie
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