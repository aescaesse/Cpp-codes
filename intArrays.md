## int arrays in cpp

```c++
#include <iostream>

using namespace std;

int main ()
{
    int *arr, arrSize;
    cin>>arrSize;
    arr = new int [arrSize];
    
    for(int i=0; i<arrSize; i++)
    {
        arr[i] = rand()%100;
        cout<<arr[i]<<" ";
    }
  return 0;
}
```
