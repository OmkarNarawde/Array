#include<iostream>
using namespace std;
void odd(int a,int b){  //we use void because it does not return anything
    if(a>b){               //if num a is greater then b it will interchanged.
        odd(b,a);
        return;
    }
    for(int i=a;i<=b;i++){    //it will check odd number between a to b.
        if(i%2!=0)          // it will check number is odd
        cout<<i<<endl;           // it returns odd number
    }
}
int main(){
    int a,b;
    cout<<"Enter the number two num: ";
    cin>>a>>b;
    odd(a,b);
}