## int arrays in cpp

```
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

}
```