#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector <int> num;
    vector <int> :: iterator it;
    int i = 0;

    while (i != -1)
    {
        cout << "Enter a number = " ;
        cin >> i;
        if (i != -1)
        {
            num.push_back(i);
        }
        
    }

    int sum = 0;

    for (it = num.begin(); it != num.end(); it++)
    {
        sum = sum + *it;
    }

    cout << "The sum is = " << sum ;


}