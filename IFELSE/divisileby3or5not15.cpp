#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    if(n%3==0 ||n%5==0){
        if(n%15!=0){
            cout<<"number is divisible by 3 or 5 but not 15";
        }else{
            cout<<"condition not matching";
        }
    }else{
        cout<<"condition not matching ";
    }
}