#include <iostream>
using namespace std;
class account_1
{
public:
    int salary = 60000;
    int bonus = 5000;
};
class account_2 : public account_1
{
public:
    void get_total()
    {
        int total = salary + bonus;
        cout << "\n salary:" << total;
    }
};
class account_4 : public account_1
{
public:
    void get_overtime()
    {
        int overtime;
        cout << "\n enter overtime:" << endl;
        cin >> overtime;
     overtime=salary+bonus+overtime;
     cout<<"\ntotal salary:"<<overtime;
     
    }
};
class account_3 : public account_1
{
public:
    void get_name()
    {
        cout << "\n kuldip";
    }
};
int main()
{
    account_2 a1;
    account_4 a4;
    account_3 a3;
   

    a1.get_total();
    a4.get_overtime();
    a3.get_name();
}