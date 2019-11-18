### Convert string value from file to int with atoi()

```c++
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	int Sum = 0;
	ifstream in;
	ofstream out;
	string a;
	in.open("numbers.txt");
	out.open("sum.txt");
	cout << "Output should be: \n";
	while (getline(in, a))
	{
		int i = atoi(a.c_str());
		cout << i << " ";
		Sum += i;
		out << i << " ";
	}
	cout << "= " << Sum;
	out << "= " << Sum;
	in.close();
	out.close();

	return 0;
}
```
### numbers.txt
```
1
2
3
4
5
```
### sum.txt
```
1 2 3 4 5 = 15
```