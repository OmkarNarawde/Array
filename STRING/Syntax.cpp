#include<iostream>
#include<string>
using namespace std;
int main(){
    // char str[5]={'a','b','c','d','e'};
    // cout<<str[1];  
    // cout<<endl;
    // string str1="hello world";
    // cout<<str1[2];
    // cout<<endl;
    // string str2={'a','b','c','d','e'};//there is "\0"is present at the end of string which is termination of string.
    // cout<<int(str2[5]);
    // string str3;
    // cin>>str3;
    // cout<<str3;//it print only string before the space it do print string after the space when we take string as input.
    string str4="omkar";
    int i=0;
    while(str4[i]!='\0'){
        cout<<str4[i]<<" "; 
        i++;
    }
    
    }
