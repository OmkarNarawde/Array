#include<iostream>
using namespace std;
int main(){
    string str="1234";
    int x=0;
    for(int i=0;i<str.length();i++){
        x *=10;
        x +=(str[i]-48);//ascii of character zero is 48 e.g Ascii of char 1 is 49 so 49-48=1 get in integer form
    }
    cout<<x;
}