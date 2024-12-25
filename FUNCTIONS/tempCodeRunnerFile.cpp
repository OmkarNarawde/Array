#include<iostream>
using namespace std;
int fact(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
         fact*=i;
    }
    return fact;
}
int comb(int a,int b){
    int ncr=fact(a)/(fact(b)*fact(a-b));
    return ncr;
}

int main(){
     cout<<comb(5,3);
}