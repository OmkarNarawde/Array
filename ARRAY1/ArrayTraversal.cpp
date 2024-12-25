#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter marks of student : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35)
        {   
            cout<<i<<endl;
            flag=true;
        }
    }
    if(flag==true) cout<<"marks of student is less than 35.";
    else cout<<"marks of student is greater than 35.";
}