#include<iostream>
using namespace std;
int main(){
    int one,two,three,sum;
    cout<<"Input first angle of the trinagle:";
    cin>>one;

    cout<<"Input second angle of the trinagle:";
    cin>>two;

    cout<<"Input third angle of the trinagle:";
    cin >> three;
    
    sum=one+two+three;

    if(sum==180)
    cout<<"The triangle is valid.";
    else
    cout<<"The trinagle is invalid.";
    return 0;

    
}