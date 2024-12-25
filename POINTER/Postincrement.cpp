#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    int b=(*ptr)++;
    cout<<a<<" "<<b;
}