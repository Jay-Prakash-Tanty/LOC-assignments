#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"Enter the rows of 2-D array:";
    cin >> n;
        cout<<"Enter the columns of 2-D array:";
    cin >> m;

    int a[n][m],b[n][m];

    cout<<"Enter the elements of 1st 2-D array:";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    
    cout<<"The elements of 2-D array a are:"<<"\n\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout <<"a["<<i<<"]["<<j<<"]:"<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[j][i]=a[i][j];
        }
    }
    cout<<"The transpose of the 2-D array a is:"<<"\n\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout <<"a["<<i<<"]["<<j<<"]:"<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }

}