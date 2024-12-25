#include<iostream>
using  namespace std;
int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    for(int m=1;m<=2*n-1;m++){
        cout<<m;
    }
    cout<<endl;

    int nsp=1;
    
    for(int i=1;i<=n;i++) {
         int a=1;
        // for number
        for(int j=1;j<=n-i;j++){
            cout<<a;
            a++;
        }
        //for spaces
        for(int k=1;k<=nsp;k++){
        cout<<" ";
         a++;
        }nsp+=2;
       
       //for number
        for(int j=1;j<=n-i;j++){
            cout<<a;
            a++;      
    }cout<<endl;
    }
}