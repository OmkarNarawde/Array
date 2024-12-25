#include<iostream>
using namespace std;
int main(){
    cout<<"enter the row";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j+=2){
            cout<<j;
        }
        cout<<endl;
    }
}
