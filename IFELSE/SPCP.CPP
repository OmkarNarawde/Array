#include<iostream>
using namespace std;
int main(){
cout<<"enter the cost price";
int cp;
cin>>cp;
cout<<"enter the selling price";
int sp;
cin>>sp;
if(sp>cp){
    sp-cp;
    cout<<"profit is "<< sp-cp;
}
else if(sp<cp){
    cout<<"loss is "<< cp-sp;
}
else{
cout<<"no loss,no profit";
}
}

