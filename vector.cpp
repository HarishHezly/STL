#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector <int> vec;

    vec.push_back(124);
    vec.push_back(67);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] <<endl;   
    }
    
}