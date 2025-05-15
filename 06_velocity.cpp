#include <iostream>
using namespace std;
int main()
{
    int v,u,a;
    float speed;
    cout<<"enter three number";
    cin>>u>>v>>a;
    speed=(u*u-v*v)/(2*a);
    cout<<"speed is"<<speed<<endl;
}