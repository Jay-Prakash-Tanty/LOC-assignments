#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check if it is positive, negative or zero:";
    cin >>a;
    if(a>0)
    {
    cout<< a <<" is a positive number";
    }
    else if(a<0)
    {
    cout<< a <<" is a negative number";
    }
    else if(a==0)
    {
    cout<< a <<" is zero";
    }
    return 0;
}
