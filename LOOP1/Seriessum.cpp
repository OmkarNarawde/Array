#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number.";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=2){
            sum+=i;
        }
        else{
            sum-=i;
        }
    }
    cout<<sum;
}