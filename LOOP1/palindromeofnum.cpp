//Palindrome of number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int temp=n;
    int rev=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        rev=lastdigit+rev*10;
        n=n/10;
    }
    if(rev==temp){
        cout<<rev<<" it is palindrome.";
    }else
    cout<<n<<" it is not a palindrome.";
}