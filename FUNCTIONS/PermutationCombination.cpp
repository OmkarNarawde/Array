#include<iostream>
using namespace std;
int fact(int x){
    int a=1;
    for(int i=2;i<=x;i++){
        a *=i;
    }
    return a;
}
int permutation(int x,int y){
    int ncr=fact(x)/(fact(y)*fact(x-y));
    return ncr;
}
int main(){
    int n;
    int r;
    cout<<"Enter the n and r: ";
    cin>>n>>r;
    cout<<permutation(n,r)<<endl;
    // cout<<fact(n)<<endl;
    //  cout<<fact(r)<<endl;
    //  cout<<fact(n-r)<<endl;
}