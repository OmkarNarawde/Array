//1-2+3-4+5-6 upto n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number.";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
        else{
            sum-=i;
        }
    }
    cout<<sum;
}