#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to get the sum of it's digits:";
    cin>>a;
    int z=0,b=0;
    do
    {
    int b;
    b=a%10;
    z=z+b;
    a=a/10;
    } while (a>0);
    cout<<"The sum of digits is:"<<z;
    return 0;

}