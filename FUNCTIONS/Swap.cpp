#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return;
}

int main(){
   int a=10;
   int b=12;
    swap(a,b);
    cout<<a<<b;
}