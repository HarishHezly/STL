#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[])
{
    for(int i=0; i<10; ++i)
        cout << "\t" << a[i];
}

int main()
{
    int a[10] = {3, 4, 5, 6, 7, 1, 9, 6, 0};
    cout << "\n The array before sorting is : ";
    show(a);

    sort(a, a+10);

    cout << "\n\n The array after sorting is : ";
    show(a);
    
    cout<<endl;
    return 0;
}