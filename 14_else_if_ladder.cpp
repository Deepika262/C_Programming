#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter Day number";
    cin>>day;
    {
    if (day==1)
    {
        cout<<"Mon";
    }
    else if (day==2)
    {
        cout<<"Tues";
    }
    else if (day==3)
    {
        cout<<"Wed";
    }
    else if (day==4)
    {
        cout<<"Thur";
    }
    else if (day==5)
    {
        cout<<"Fri";
    }
    else if (day==6)
    {
        cout<<"Sat";
    }
    else if (day==7)
    {
        cout<<"Sun";
    }
    else
    {
        cout<<"invalid day";
    }
    return 0;
    }
}

