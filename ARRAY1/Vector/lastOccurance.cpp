
//Question:Find the last occurence of x in the arrary.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(15);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x=1;
    int idx;
    // from starting to end checj array


    // for(int i=0;i<v.size();i++){
    // if(x==v[i]) idx=i;
    // }
    // cout<<idx;


    // for ending to start check array(this help to find in efficient way)
    
    for(int i=v.size()-1;i>0;i--){
    if(x==v[i]) idx=i;
    }
    cout<<idx;
}