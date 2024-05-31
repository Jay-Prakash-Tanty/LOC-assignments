#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    int z=0;
    switch(z)
    {
        case 0:
        cout<<"\nAddition is:"<<a+b;
        case 1:
        cout<<"\nSubtraction is:"<<a-b;
        case 2:
        cout<<"\nDivison is:"<<a/b;
        case 3:
        cout<<"\nMultiplication is:"<<a*b;
        case 4:
        cout<<"\nModulo division is:"<<a%b;
        break;
    }
    return 0;
}