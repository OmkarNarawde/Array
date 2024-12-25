#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>&v){
int No0=0;
int No1=0;

for(int i=0;i<v.size();i++){
if(v[i]==0)  No0++;
else No1++;
}

for(int i=0;i<v.size();i++){
if(i<No0) v[i]=0;
else v[i]=1;
}
}

void display(vector<int>&v){
for(int i=0;i<v.size();i++){
cout<<v[i]<<" ";
}
}

int main(){
vector<int>v;
v.push_back(0);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);
sort01(v);
display(v);
}