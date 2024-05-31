#include<iostream>
using namespace std;

int main()
{
    cout<<"the numbers from 1 to 100 is here:\n";
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        cout<<"Fizz\n";
        else if (i%5==0)
        cout<<"Buzz\n";
        else
        cout<<i<<"\n";

    }
    return 0;
}