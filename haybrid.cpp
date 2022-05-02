#include<iostream>
using namespace std;
class account_1
{
    protected:  
    int salary;
    public:
    void get_salary()
    {
        cout<<"enter salary:"<<endl;
        cin>>salary;
    }
};
class account_2:public account_1
{
    protected:  
    int bonus;
    public:
    void get_bonus()
    {
        cout<<"enter bonus:"<<endl;
        cin>>bonus;
    }
};
class account_3
{
    protected:  
    int overtime;
    public:
    void get_overtime()
    {
        cout<<"enter overtime:"<<endl;
        cin>>overtime;
    }
};
class account_4:public account_2,public account_3
{
    protected:  
    int total;
    public:
    void get_total()
    {
        get_salary();
        get_bonus();
        get_overtime();
        cout<<"total salary"<<salary+bonus+overtime;
    }
};
int main()
{
    account_4 total;
    total.get_total();
}