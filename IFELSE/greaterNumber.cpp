#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the three number";
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    if(x>y && x>z){
        cout<<"x is greater than y and z";
    }if(y>x && y>z){
        cout<<"y is greater than x and z";
    }if(x==y && y==z){
        cout<<"all are equal";

    }else{
        cout<<"z is greater than x and y";
    }
}
