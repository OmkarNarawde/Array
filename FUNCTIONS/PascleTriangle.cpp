#include<iostream>
using namespace std;
int fact(int x){
    int a=1;
    for(int i=2;i<=x;i++){
        a *=i;
    }
    return a;
}
int permutation(int i,int j){
    int ncr=fact(i)/(fact(j)*fact(i-j));
    return ncr;
    
}
int main(){
    cout<<"Enter the rows: ";
    int x;
    cin>>x;
    for(int i=0;i<=x;i++){
        for(int j=0;j<=i;j++){
          cout<< permutation(i,j);
        }
        cout<<endl;
    }
}