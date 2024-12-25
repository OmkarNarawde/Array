// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number.";
//     cin>>n;
//     int lastdigit;
//     int rev;
//     while(n!=0){ 
//         lastdigit=n%10;
//         n=n/10;
//         rev=lastdigit;
//          cout<<rev;
//     }
// }

                    //OR
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number.";
    cin>>n;
    int lastdigit=0;
    int rev=0;
    while(n!=0){ 
        rev*=10;
        lastdigit=n%10;
        rev+=lastdigit;
        n=n/10;
    }
     cout<<rev;
}