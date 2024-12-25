#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
display(v);
cout<<endl;
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        // swap element of array
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
display(v);
}
