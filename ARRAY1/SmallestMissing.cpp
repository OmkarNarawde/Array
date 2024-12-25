#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
       if(arr[i]!=i+1){
        cout<<"Missing element is found that is "<<arr[i];
        break;
       }
    }
}