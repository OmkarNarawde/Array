#include<iostream>
#include<vector>
using namespace std;
void ReversePart(vector<int>&v,int i, int j){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);
    cout<<endl;
    ReversePart(v,1,3);
    display(v);

}