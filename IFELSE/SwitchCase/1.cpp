#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"enter the choice";
    cout<<"enter 1 for monday";
    cout<<"enter 2 for tuesday";
    cout<<"enter 3 for wednesday";
    cout<<"enter 4 for thursday";
    cout<<"enter 5 for friday";
    cout<<"enter 6 for saturday";
    cout<<"enter 7 for friday";
    cin>>ch;
   switch(ch){
    case 1:
        cout<<"monday";
        break;
     case 2:
        cout<<"tuesday";
         break;
     case 3:
        cout<<"wednesday";
         break;
     case 4:
        cout<<"thursday";
         break;
     case 5:
        cout<<"friday";
         break;
     case 6:
         cout<<"saturday";
         break;
     case 7:
        cout<<"sunday";
         break;
        default:
        cout<<"pleases enter valid number";
           }
}