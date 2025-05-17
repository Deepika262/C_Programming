#include <iostream>
using namespace std;
int main()
{
    cout<<"Menu/n";
    cout<<"1.Add\n2.sub\n3.multi\n 4.div\n";


int option;
cout<<"Enter your choice";
cin>>option;
int a,b,c;
cout<<"Enter two numbers";
cin>>a>>b>>c;
switch(option)
{
    case 1:c=a+b;
    break;
    case 2:c=a-b;
    break;
    case 3:c=a*b;
    break;
    case 4:c=a/b;
    break;
    cout<<"result is"<<c<<endl;
    return 0;
}
}