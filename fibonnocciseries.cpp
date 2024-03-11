#include<iostream>
using namespace std;
int main()
{
    int i, n1=0,n2=1,n3,n;
    cout<<"Enter no.of numbers you want in fibonnocci series:";
    cin>>n;
    cout<<n1<<" "<<n2<<" ";
    for(i=1;i<n-1;i++)
    {
       n3=n1+n2;
       n1=n2;
       n2=n3;
       cout<<n3<<" ";
    }
}