//check number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    bool flag=true;//is number is prime
    for(int i=2;i<=n-1;i++){
        if(n%i==0)
        flag=false;//is number is composite
        break;
    }
    if(n==1)  cout<<n<<" is neigther prime nor composite number";
    else if(flag==true)cout<<n<<"is prime number.";
    else     cout<<n<<" is a composite number";}