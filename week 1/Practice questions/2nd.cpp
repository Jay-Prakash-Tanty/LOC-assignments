#include<iostream>
using namespace std;
int main(){
    int eng,chem,phy,math,bio;
    float total;
    cout<<"Enter marks got in eng:";
    cin>>eng; 
        cout<<"Enter marks got in chem:";
    cin>>chem;
        cout<<"Enter marks got in phy:";
    cin>>phy;
        cout<<"Enter marks got in math:";
    cin>>math;
        cout<<"Enter marks got in bio:";
    cin>>bio;
    total=eng+chem+phy+math+bio;
    cout <<"total marks obtained:"<<total<<"\n";
    cout<<"Average:"<<total/5<<"\n";
    cout<<"Percentage:"<<(total/500)*100<<"%\n";


}