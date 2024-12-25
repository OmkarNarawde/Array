#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(5);
    cout<<"Element at 1st index"<<arr[1]<<endl;
    cout<<"Size of vector"<<arr.size()<<endl;
    cout<<"Capacity of array"<<arr.capacity()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    //  sort(arr.begin(),arr.end());
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr.at(i);
    // }
}
