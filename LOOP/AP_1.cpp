#include<iostream>
using namespace std;
int main(){
    //print ap of 1 2 4 8 16 upto n
    cout<<"enter the number";
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
    cout<<a<<endl;
    a*=2;
    }
}
