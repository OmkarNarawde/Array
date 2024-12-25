#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the row : ";
    int n;
    cin>>n;
     int a=2; //for odd a=1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}