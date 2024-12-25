#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int count(int num){
    int count=0; 
    while(num!=0){
        count++;
        num/=10;
    }return count;
}
int main(){
    int num;
    cout<<"enter the num: ";
    cin>>num;
   cout<<square(count(num));
}