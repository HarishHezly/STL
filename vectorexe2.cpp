#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iomanip>
#include <iterator>

using namespace std;

class Table
{
  public:
    
    void change_name(string old_name, string new_name, int new_age)
    {
        itName = find (name.begin(), name.end(), old_name);

        if (itName == name.end())
        {
            cout << "Name is not in table" << endl;
        }

        else
        {
            cout << "Changing old name to new name" << endl;
            *itName = new_name;
            int d = distance(name.begin(), itName);
            itAge = age.begin() + d;
            *itAge = new_age;
        }
    }

    void add_data(string n, int a)
    {
        name.push_back(n);
        age.push_back(a);
    }

    string get_name(int index)
    {
        if (index < name.size())
            return "";//name[index];
        else
            throw "error";
        return "";
    }

    int get_age(int index)
    {

        if (index < age.size())
            return 0;//age[index];
        else
            throw 0;
        return 0;
    }

    int get_max_length()
    {

        int max = 0;
        for (itName = name.begin(); itName != name.end(); itName++)
        {
            string tmp = *itName;
            if (tmp.length() > max)
            {
                max = tmp.length();
            }
        }
        return max;
    }
    void printTable()
    {
        int length = get_max_length();
        if (length < 8)
        {
            length = 8;
        }

        cout << "\n+" << setfill('-') << setw(length)<< "-"  << setfill(' ') <<setw(0) << "+"
                    << setfill('-') << setw(5)     << "-"  << setfill(' ') <<setw(0) << "+" << endl;

        cout << "|" << setw(length) << "Name" << setw(0) << "|" 
                    << setw(5)      << "Age"  << setw(0) << "|" << endl;

        cout << "+" << setfill('-') << setw(length)<< "-"  << setfill(' ') <<setw(0) << "+"
                    << setfill('-') << setw(5)     << "-"  << setfill(' ') <<setw(0) << "+" << endl;


        
        for (itName = name.begin(),itAge = age.begin() ; itName != name.end(); itName++, itAge++)
        {
            cout << "|" << setw(length) << *itName << setw(0) << "|"
                        <<  setw(5)     << *itAge  << setw(0) << "|" << endl; 
        }

        cout << "+"<< setfill('-') << setw(length)<<"-" << setw(0) << "+"
                   << setfill('-') << setw(5)<<"-" << setw(0) << "+" << endl;
    }

  private:
    vector<string> name;
    vector<int> age;
    vector<string>::iterator itName;
    vector<int>::iterator itAge;
};

int main()
{
    Table mytable;
    int a = 0;
    string n;
    char t = 'y';
    bool cont = true;
    while (cont)
    {
        cout << "Enter your name = ";
        cin >> n;
        cout << "Enter your age = ";
        cin >> a;
        cout << "Continue adding (y/n):";
        cin >> t;
        cin.ignore();

        if (t == 'y')
        {
            cont = true;
        }

        else
        {
            cont = false;
        }
        mytable.add_data(n, a);
    }
    
    mytable.printTable();

    cout << "Enter the name you want to change : ";
    string old_name;
    cin >> old_name;

    cout << "Enter new name to change "<< old_name <<": ";
    string new_name;
    cin >> new_name;

    cout << "Enter new age for "<< new_name <<": ";
    int new_age;
    cin >> new_age;

    mytable.change_name(old_name, new_name, new_age);
    

    mytable.printTable();

}
