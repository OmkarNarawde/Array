#include<iostream>
using namespace std;
int addition(int x,int y){
    return x+y;
}
int mini(int x,int y){
    if(x<y) return x;
    else return y;
}
int main(){
    int n;
    int m;
    cout<<"Enter the two integer: ";
    cin>>m>>n;
    cout<<"addition of two number is: "<< addition(m,n)<<endl;
     cout<<"Minimum of two number is: "<< mini(m,n);
}