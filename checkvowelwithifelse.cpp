#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter character:"<<endl;
    cin>>c;
    if (c== 'a' || c== 'A' || c == 'e' || c== 'E' || c == 'i' || c == 'I'|| c== 'o' || c== 'O'|| c== 'u' || c== 'U')
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonent";
    }
}