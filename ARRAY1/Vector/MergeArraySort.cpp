#include<iostream>
#include<vector>
using namespace std;
vector<int>Merge(vector<int>&v1,vector<int>&v2){
    int i=0;
    int j=0;
    int k=0;
    int n=v1.size();
    int m=v2.size();
    vector<int>res(m+n);
    while(i<n&&j<m){
        if(v1[i]<v2[j]){
            res[k]=v1[i];
            i++;
        }
        else{
            res[k]=v2[j];
            j++;
        }
        k++;
    }
    if(i==n){
        while (j<m)
        {
           res[k]=v2[j];
           k++;
           j++;
        }
    }
     if(j==m){
        while (i<n)
        {
           res[k]=v1[i];
           k++;
           i++;
        }
    }
    return res;
}
int main(){
    vector<int>v1;
    vector<int>v2;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(8);

    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(9);
    
    vector<int>v=Merge(v1,v2); 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }    

}