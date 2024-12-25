// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the row";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         cout<<endl;
//     }
// }

 
//  #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the row";
//     int n;
//     cin>>n;
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<k;
//             }
//         cout<<endl;
//     }
// }


 
 #include<iostream>
using namespace std;
int main(){
    cout<<"enter the row";
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)>n)cout<<"*";
            else 
            cout<<" ";
    }   cout<<endl;
    }
}
 
 