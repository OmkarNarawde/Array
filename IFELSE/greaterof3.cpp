#include <iostream>
using namespace std;
int main(){
    cout<<"enter the three number";
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
   if(a>b){
    if(a>c){
        cout<<a<<"is greater number";
    }else{
        cout<<c<<" is greater number";
    }
   }
   else{
        if(b>c){
        cout<<b<<"is greater number";}

    else{
         cout<<c<<" is greater number";
    }
   }
}