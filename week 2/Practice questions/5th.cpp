#include<iostream>
#include<string>
using namespace std;
int main(){
    string kl;
    cout<<"Enter the string:";
    cin >>kl;
    for(int i=0;i<kl.size();i++)
    {
    if (((int)kl[i]>=48 && (int)kl[i]<=57)||
        ((int)kl[i]>=32 && (int)kl[i]<=47)||
        ((int)kl[i]>=58 && (int)kl[i]<=64)||
        ((int)kl[i]>=91 && (int)kl[i]<=96)||
        ((int)kl[i]>=123 && (int)kl[i]<=126))
    {
       kl.erase(i,1);
       i--;
    }

    else
    continue;
    }
    cout<<kl;
    return 0;
}