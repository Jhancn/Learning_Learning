#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Swapped values :"<<a<<" "<<b;
}