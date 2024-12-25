// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the num: ";
//     cin>>n;
//     int a=n;
//     int fact=1;
//     while(n>0){
//        fact=n*fact;
//        n--;
//     }if(a==0) cout<<"1";
//     else
//     cout<<fact;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num: ";
    cin>>n;
    int fact=1;
    for(int i=2;i<n;i++){
        fact*=i;
    }
    cout<<fact;
}