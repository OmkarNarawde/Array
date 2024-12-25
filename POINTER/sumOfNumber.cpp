#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    int* p1=&x;
    int* p2=&y;
    cout<<"Enter the two number :";
    cin>>*p1;
    cin>>*p2;
    cout<<"Sum of two numer is :"<<*p1 + *p2<<endl;
    cout<<"Sum of two numer is :"<<x + y;
}