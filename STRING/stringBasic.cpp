#include<iostream>
using namespace std;
int main(){
string str="omkar";
for(int i=0;str[i]!='\0';i++){
if(i%2==0){
    str[i]='o';
}
}
cout<<str;
}