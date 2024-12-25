#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"how many numer you want to store: ";
    cin>>n;
    int intArray[n];
    cout<<"Enter the elemnt: ";
    for(int i=0;i<=n-1;i++){
          cin>>intArray[i];
    }
    int product=1;
     for(int i=0;i<=n-1;i++){
         product*=intArray[i];
    }
    cout<<"Product of array element is :"<<product;
}