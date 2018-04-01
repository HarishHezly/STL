#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << "\t" << a[i];
}

int main()
{
    int c = 0;
    int a[10] = {3, 4, 5, 6, 7, 1, 9, 6, 0};
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\n The array is : ";
    show(a, asize);

    cout << "\n\nLet's say we want to search for 2 in the array";
    cout << "\n So, we first sort the array";
    sort(a, a + 10);
    cout << "\n\n The array after sorting is : ";
    show(a, asize);

    for (int i = 0; i < 10; i++)
    {
        cout << "\nenter a number : ";
        cin >> c;
        cout << "\nNow, we do the binary search";
        if (binary_search(a, a + 10, c))
            cout << "\nElement found in the array";
        else
            cout << "\nElement not found in the array";
    }

    return 0;
}