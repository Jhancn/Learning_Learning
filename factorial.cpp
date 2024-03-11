#include<iostream>
using namespace std;
int main()
{
    int i,n,f;
    cout<<"Enter a number :";
    cin>>n;
    f=n;
    for(i=1;i<n;i++)
    {
        f=f*i;
    }
    cout<<"factorial :"<<f;
}