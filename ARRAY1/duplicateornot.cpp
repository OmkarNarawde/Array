// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,5,6,7,8};
    bool flag=false;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==true) break;
    }
    if(flag==true)cout<<"Array contain duplicate value.";
        else cout<<"Array does not contain duplicate value.";
}