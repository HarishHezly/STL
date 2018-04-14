#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Table
{
  public:
    void add_data(string n, int a)
    {
        name.push_back(n);
        age.push_back(a);
    }

    string get_name(int index)
    {
        if (index < name.size())
            return name[index];
        else
            throw "error";
        return "";
    }

    int get_age(int index)
    {

        if (index < age.size())
            return age[index];
        else
            throw 0;
        return 0;
    }

    int get_max_length()
    {
        vector<string>::iterator it;
        int max = 0;
        for (it = name.begin(); it != name.end(); it++)
        {
            string tmp = *it;
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

        cout << "|" << setw(length) << "Name" << setw(0) << "|" 
                    << setw(5)      << "Age"  << setw(0) << "|" << endl;

        cout << "+" << setfill('-') << setw(length)<< "-"  << setfill(' ') <<setw(0) << "+"
                    << setfill('-') << setw(5)     << "-"  << setfill(' ') <<setw(0) << "+" << endl;

        for (int i = 0; i < name.size(); i++)
        {
            cout << "|" << setw(length) << name[i] << setw(0) << "|"
                        <<  setw(5)     << age[i]  << setw(0) << "|" << endl; 
        }

        cout << "+"<< setfill('-') << setw(length)<<"-" << setw(0) << "+"
                   << setfill('-') << setw(5)<<"-" << setw(0) << "+" << endl;
    }

  private:
    vector<string> name;
    vector<int> age;
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
}
