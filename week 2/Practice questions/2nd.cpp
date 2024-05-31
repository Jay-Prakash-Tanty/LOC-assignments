#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int n,i,r,q,ans,digit,rev=0;
    cout<<"Enter the Number:";
    cin>>n;
    i=n;
    r=1;
    while(i>=1){
        r=(r*10)+(i%2);
        q=i/2;
        i=q;

    }
    while(r>0){
        digit=r%10;
        rev=(rev*10)+digit;
        r=r/10;
    }
    ans=rev/10;
    cout<<"binary form:"<<ans<<"\n";
}