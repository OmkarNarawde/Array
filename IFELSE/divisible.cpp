#include<iostream>
using namespace std;
int main(){
    cout<<"Enter any number";
    int n;
    cin>>n;
    if(n%5==0  && n%3==0){
        cout<<"Number is divisible by 3 nad 5";
    }
    else{
        cout<<"not divisible ";
    }
}