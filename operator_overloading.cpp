#include<iostream>
using namespace std;
class loc //location
{
    int longitude,latitude;
    public:
    loc(){}
    loc(int lg,int lt)
    {
        longitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<<"\n\n longitude:"<<longitude<<"";
        cout<<"latitude:"<<latitude<<"\n";
    }
    friend loc operator+(loc op1,loc op2);
};
loc operator+(loc op1,loc op2)
{
    loc temp;
    temp.longitude=op1.longitude+op2.longitude;
    temp.latitude=op1.latitude+op2.latitude;
    return temp;
}
int main ()
{
    loc ob1(10,20),ob2(5,30),ob3;
    ob1. show();
    ob2. show();
    ob3=ob1+ob2;
    ob3.show();
}


//////////////////////////////////maltification//////////////////////////////
// #include<iostream>
// using namespace std;
// class loc //location
// {
//     int longitude,latitude;
//     public:
//     loc(){}
//     loc(int lg,int lt)
//     {
//         longitude=lg;
//         latitude=lt;
//     }
//     void show()
//     {
//         cout<<"\n\n longitude:"<<longitude<<"";
//         cout<<"latitude:"<<latitude<<"\n";
//     }
//     friend loc operator*(loc op1,loc op2);
// };
// loc operator*(loc op1,loc op2)
// {
//     loc temp;
//     temp.longitude=op1.longitude*op2.longitude;
//     temp.latitude=op1.latitude*op2.latitude;
//     return temp;
// }
// int main ()
// {
//     loc ob1(10,20),ob2(5,30),ob3;
//     ob1. show();
//     ob2. show();
//     ob3=ob1*ob2;
//     ob3.show();
// }

////////////////////////////mainas///////////////////////////
// #include<iostream>
// using namespace std;
// class loc //location
// {
//     int longitude,latitude;
//     public:
//     loc(){}
//     loc(int lg,int lt)
//     {
//         longitude=lg;
//         latitude=lt;
//     }
//     void show()
//     {
//         cout<<"\n\n longitude:"<<longitude<<"";
//         cout<<"latitude:"<<latitude<<"\n";
//     }
//     friend loc operator-(loc op1,loc op2);
// };
// loc operator-(loc op1,loc op2)
// {
//     loc temp;
//     temp.longitude=op1.longitude-op2.longitude;
//     temp.latitude=op1.latitude-op2.latitude;
//     return temp;
// }
// int main ()
// {
//     loc ob1(10,20),ob2(5,30),ob3;
//     ob1. show();
//     ob2. show();
//     ob3=ob1-ob2;
//     ob3.show();
// }




/////////////////////////////division/////////////////////////
// #include<iostream>
// using namespace std;
// class loc //location
// {
//     int longitude,latitude;
//     public:
//     loc(){}
//     loc(int lg,int lt)
//     {
//         longitude=lg;
//         latitude=lt;
//     }
//     void show()
//     {
//         cout<<"\n\n longitude:"<<longitude<<"";
//         cout<<"latitude:"<<latitude<<"\n";
//     }
//     friend loc operator/(loc op1,loc op2);
// };
// loc operator/(loc op1,loc op2)
// {
//     loc temp;
//     temp.longitude=op1.longitude/op2.longitude;
//     temp.latitude=op1.latitude/op2.latitude;
//     return temp;
// }
// int main ()
// {
//     loc ob1(10,50),ob2(5,20),ob3;
//     ob1. show();
//     ob2. show();
//     ob3=ob1/ob2;
//     ob3.show();
// }