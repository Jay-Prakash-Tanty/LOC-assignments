#include<iostream>
using namespace std;
int main(){
    double l;
    double met,kil;
    cout<<"Enter the length in centimeters:";
    cin>>l;
    met=l/100;
    cout<<"The lenght in meters is:"<<met<<" meters\n";
    kil=met/1000;
    cout<<"The lenght in kilometers is:"<<kil<<" kilometers\n";
}