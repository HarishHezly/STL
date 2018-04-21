#include <map>
#include <string>
#include <iterator>
#include <iostream>

using namespace std;

// class A
// {
//     private:
//     int myData

//     public:
//     int operator+(B otherClass)
//     {
//         return myData + otherClass.someData;
//     }

    
// }

// class B
// {
//     public:
//     int someData;
// }


int main()
{
    map<string, int> Marks;

    Marks["Zoology"] = 96;
    Marks["BM"] = 76;
    Marks["Science"] = 80;
    Marks["BM"] = 90;

    //Marks.insert( pair<string,int>("Zoology",96)) ;
    //Marks.insert( pair<string,int>("BM",76)) ;
    //Marks.insert( pair<string,int>("Science",80)) ;
    //Marks.insert( pair<string,int>("BM",90)) ;

   // Marks.emplace("Zoology", 96);
    //Marks.emplace("BM", 76);
    //Marks.emplace("Science", 80);
    //Marks.emplace("BM", 90);

    map<string, int>::iterator itMap;

    for (itMap = Marks.begin(); itMap != Marks.end(); itMap++)
    {
        cout << (*itMap).first <<  "  " << (*itMap).second << endl;
    }


    // A myA;
    // B myB;

    // int sum = myA + myB;
    //cout << Marks["BM"] << endl;
}