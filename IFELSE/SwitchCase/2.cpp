#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"enter the choice";
    cout<<"enter 1 for january";
    cout<<"enter 2 for feb";
    cout<<"enter 3 for march";
    cout<<"enter 4 for april";
    cout<<"enter 5 for may";
    cout<<"enter 6 for june";
    cout<<"enter 7 for july";
    cout<<"enter 8 for Aug";
    cout<<"enter 9 for Sep";
    cout<<"enter 10 for Oct";
    cout<<"enter 11 for Nov";
    cout<<"enter 12 for Dec";
    cin>>ch;
   switch(ch){
    case 1:
        cout<<"31";
        break;
     case 2:
        cout<<"28";
         break;
     case 3:
        cout<<"31";
         break;
     case 4:
        cout<<"30";
         break;
     case 5:
        cout<<"31";
         break;
     case 6:
        cout<<"30";
         break;
     case 7:
        cout<<"31";
         break;
     case 8:
        cout<<"30";
         break;
     case 9:
        cout<<"31";
         break;
     case 10:
        cout<<"30";
         break;
     case 11:
        cout<<"31";
         break;
     case 12:
         cout<<"31";
         break;
        default:
        cout<<"pleases enter valid number";
           }
}