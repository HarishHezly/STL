#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector <float> vec;
    vector <string> VEC;
    vector<float>::iterator it;
    vector <string>::iterator IT;

    vec.push_back(106.7);
    vec.push_back(54.89);
    vec.push_back(45.234);
    vec.push_back(67.88);

    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout<< *it<<endl;
    }

    VEC.push_back("Sal");
    VEC.push_back("Adam");
    VEC.push_back("Choi");
    VEC.push_back("Jay");

    for (IT = VEC.begin(); IT != VEC.end(); IT++)
    {
        cout << *IT <<endl;
    }



    //for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] <<endl;   
    // }
    

}