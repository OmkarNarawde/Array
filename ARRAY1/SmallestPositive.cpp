//WAP to find the smallest missing positive element in the sorted Array that contains only positive 
//elements
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
    int x=1;
    for(int i=0;i<=n-1;i++){
       if(arr[i]<=0)continue;

       if(arr[i]!=x){
        cout<<"missing element is :"<<x;
        break;
       }else
       x++;
    }
}