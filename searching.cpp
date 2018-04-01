#include <iostream>
#include <algorithm>

using namespace std ;

void show (int a[], int arraysize)
{
    for(int i=0, i < arraysize, ++i)
        cout << "\t" << a[i];
}

int main()
{
    int a[10] = {3, 4, 5, 6, 7, 1, 9, 6, 0};
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\n The array is : ";
}