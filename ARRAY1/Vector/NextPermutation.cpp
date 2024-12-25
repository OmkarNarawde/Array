#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
//find the pivot from the array
void NextPermutation(vector<int>&v){
    int n=v.size();
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    //reverse array if pivot not found
    if(idx==-1){
        reverse(v.begin(),v.end());
        return;
    }

    //reverse after pivot finds
     reverse(v.begin()+idx+1,v.end());

    //finding the just grater element in array 
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }
    //swapping thecidx and j.
    int temp=v[idx];
    v[idx]=v[j];
    v[j]=temp;
    return;
    }
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    NextPermutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }    
}
