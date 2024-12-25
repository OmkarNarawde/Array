
// Find the doublets in the array whose sum is equal to the given number.


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int x;
    cout<<"Enter the sum: ";
    cin>>x;

    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Element of array: ";
    for(int i=0;i<size;i++){
        int q;
        cin>>q;
        v.push_back(q);
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}
   

