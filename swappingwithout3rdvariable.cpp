#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swapped values:"<<a<<" "<<b;
}