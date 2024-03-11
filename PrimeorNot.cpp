#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number:";
    cin>>n;
    if(n<2)
    {
        cout<<"Please enter correct number";
        cin>>n;
    }
    if(n==2)
    {
        cout<<"Prime Number";
    }
    if(n>2)
    {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Non-Prime Number";
            break;
        }
    }
    if(i==n)
    {
        cout<<"Prime Number";
    }
    }
}