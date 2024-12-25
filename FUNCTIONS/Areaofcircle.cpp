#include<iostream>
using namespace std;
double area(int r){ //it return return value in doule
    float area=3.14*r*r;
    return area;
}
int main(){
   float radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<area(radius);
}