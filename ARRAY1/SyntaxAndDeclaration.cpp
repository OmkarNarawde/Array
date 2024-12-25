#include<iostream>
#include<climits>
using namespace std;
int main(){
int max=MIN_INT;
int smax=MIN_INT;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
if(max<arr[i]){
max=arr[i];
}
}
for(int i=0;i<n;i++){
if(smax!=max&&smax<arr[i]){
smax=arr[i];
}
cout<<smax;

}