#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
 string str;
 getline(cin,str);
 string str1=str;
 reverse(str.begin(),str.end());
 if(str==str1){
    cout<<"String is palindrome.";
 }
 else{
    cout<<"not palindrome.";
 }
}