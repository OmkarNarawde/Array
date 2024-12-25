//  #include<iostream>
//  using namespace std;
// int main(){
//     cout<<"Enter the sides : ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<"*";
//         }
//          cout<<endl;
//     }
// }

//  #include<iostream>
//  using namespace std;
// int main(){
//     cout<<"Enter the sides : ";
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=n-i;j>0;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the row";
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the row";
    int n;
    cin>>n;
    int a=n;
    for(int i=0;i<n;i++){
        for(int j=a;j>0;j--){
            cout<<"*";
        }
        a--;
        cout<<endl;
    }
}


 
 