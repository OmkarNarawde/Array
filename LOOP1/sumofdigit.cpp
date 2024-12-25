#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number.";
    cin>>n;
    int lastdigit;
    int sum=0;
    while(n!=0){ 
        lastdigit=n%10;
        n=n/10;
        sum+=lastdigit;
    }
    cout<<sum;
}