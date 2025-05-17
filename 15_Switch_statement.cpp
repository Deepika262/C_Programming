#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter Your Day";
    cin>>day;
    switch(day)
    {
        case 1:cout<<"mon";
        break;
        case 2:cout<<"tue";
        break;
        case 3:cout<<"wed";
        break;
        case 4:cout<<"Thur";
        break;
        case 5:cout<<"fri";
        break;
        case 6:cout<<"Sat";
        break;
        case 7:cout<<"Sun";
        break;
        default:"Invalid Day";


    }
    return 0;

}