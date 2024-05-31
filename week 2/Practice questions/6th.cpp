#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int sz;
    cout<<"Enter the size of the array:";
    cin>>sz;
    int arr[sz];
    cout<<"Enter the array elements:";
    for(int i=0;i<sz;i++){
        cout<<"arr["<<i<<"]:";
        cin>>arr[i];
    }
    sort(arr,arr+sz);
    cout<<"The second smallest number in the array is:"<<arr[1];

}