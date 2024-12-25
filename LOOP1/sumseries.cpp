#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%2==0) cout<<-n/2;
    else cout<<-n/2+n;
}