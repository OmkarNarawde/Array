#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str); //  input:onkar
    cout<<str<<endl;  //  output:onkar
    str[1]='m';      //   mutable string make change at index 1 
    cout<<str;       //   output :omkar
}
