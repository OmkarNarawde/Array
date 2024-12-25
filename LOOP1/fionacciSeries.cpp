#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a=0;
    int b=1;
    int sum=0;
    for(int i=0;i<n;i++){
        
        sum=a+b;
        a=b;
        b=sum;
    }cout<<sum;
}