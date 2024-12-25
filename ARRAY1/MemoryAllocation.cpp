#include<iostream>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cout<<&arr[i]<<endl;
    }
}
//Output: 
// 0x61fefc
// 0x61ff00
// 0x61ff04
// 0x61ff08
// address pattren in hexadecimal i.e 0 1 2 3 4 5 6 7 8 9 a b c d e f 