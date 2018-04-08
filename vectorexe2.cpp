#include <iostream>
#include <vector>

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

    void printTable(){
        
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

    while (a != -1)
    {
        cout << "Enter your name = ";
        cin >> n;
        cout << "Enter your age = ";
        cin >> a;

        mytable.add_data(n, a);
    }

    mytable.printTable();
}
