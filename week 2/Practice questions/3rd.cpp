#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"Enter the rows of two 2-D array:";
    cin >> n;
        cout<<"Enter the columns of two 2-D array:";
    cin >> m;

    int a[n][m],b[n][m],c[n][m];

    cout<<"Enter the elements of 1st 2-D array:";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    cout<<"Enter the elements of 2nd 2-D array:";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin >>b[i][j];
        }
    }

    cout<<"The elements of 2-D array a are:"<<"\n\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout <<"a["<<i<<"]["<<j<<"]:"<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"The elements of 2-D array b are:"<<"\n\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout <<"b["<<i<<"]["<<j<<"]:"<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"The elements of sum of array a and array b is:"<<"\n\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout <<"c["<<i<<"]["<<j<<"]:"<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }


}
