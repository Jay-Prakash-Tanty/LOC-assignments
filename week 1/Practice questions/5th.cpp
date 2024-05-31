#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;

    cout<<"Input the length of first side of the triangle:";
    cin>>side1;

    cout<<"Input the length of second side of the triangle:";
    cin>>side2;

    cout<<"Input the length of third side of the triangle:";
    cin >>side3;
    
    if(side1+side2>side3 && side1+side3>side2 && side3+side2>side1){
        if(side1==side2&&side2==side3)
        cout<<"The triangle is equilateral.";
        else if(side1==side2|| side2==side3||side3==side1)
        cout<<"The triangle is isosceles.";
        else
        cout<<"The triangle is scalene.";
    }
    else
    cout<<"Triangle is not possible from the given sides.";
    return 0;
}