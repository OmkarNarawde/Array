#include<iostream>
using namespace std;
int main(){
    cout<<"enter the character";
    int ch;
    cin>>ch;
    int Ascii=int(ch);
    if(Ascii>97 &&Ascii<122){
        cout<<"character is alphabet and ascii number is"<<ch;
    }
    if(Ascii>65 && Ascii<90){
        cout<<"character is alphabet and ascii number is"<<ch;
    }
}