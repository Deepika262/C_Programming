#include <iostream>
using namespace std;
int main()
{
    int m1,m2,m3,avg,total;
    cout<<"Enter three subjects: ";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    avg=total/3;
    if(avg>=60)
    {
        cout<<"Grade A";
    }
    else if (avg >=35 && avg <60)
    {
        cout<<"Grade B";
    }
    else 
    {
        cout<<"Fail";
    }
    return 0;


}
    

