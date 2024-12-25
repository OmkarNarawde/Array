#include<iostream>
#include<vector>
using namespace std;
void ReverseArray(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int k;
    cout<<"Enter the steps of rotation: ";
    cin>>k;
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int n=v.size();
    if(k>n){
        k=k%n;
    }
    ReverseArray(0,n-k-1,v);
    ReverseArray(n-k,n-1,v);
    ReverseArray(0,n-1,v);
    display(v);

}