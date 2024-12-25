#include<iostream>
using namespace std;
int main(){
    cout<<"Enter any number";
    int n;
    cin>>n;
    if(n>99 && n<=999){
        cout<<"three digit number";
    }
    else{
        cout<<"not three digit number";
    }
}