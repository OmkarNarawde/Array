#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    for(int m=1;m<=2*n-1;m++){
        cout<<"*";
    } cout<<endl;
    int nsp=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
         for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}