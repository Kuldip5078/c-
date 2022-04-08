#include <iostream>
using namespace std;
int main()
{
    int day, week, year;

    cout<<"\nenter the days:" ;
    cin >> day;
    year=day/365;
    week=(day%365)/7;
    day=day-((year*365)+(week*7));
    cout<<"\n year:"<<year<<"\n week:"<<week<<"\n day:"<<day;

}