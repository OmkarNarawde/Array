#include<iostream>
#include<string>
#include <algorithm> // For reverse
using namespace std;
int main(){
string str="omkara";
cout<<str.length();
cout<<str.size();
str.push_back('n'); //push_back is void function so it does not return anything so "cout<<str.push_back('n');" gives error
cout<<str;
str.pop_back();//no need to pass argument it remove single element from the string
cout<<str<<endl;
reverse(str.begin(),str.end());
//reverse the 2nd half part of string
string str1="ganapati";
int n=str1.length();
reverse(str1.begin()+(n/2),str1.end());
cout<<str1<<endl;
}