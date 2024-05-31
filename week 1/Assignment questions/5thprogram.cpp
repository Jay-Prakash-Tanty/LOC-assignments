#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the radius of the circle:";
    cin>>r;
    int d=r/2;
    int s=2*3.141*r;
    int a=(3.141)*r*r;
    cout<<"The diameter is: "<<d;
    cout<<"\nThe circumference is: "<<s;
    cout<<"\nThe area is: "<<a;
    return 0;
}