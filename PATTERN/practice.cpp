// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the row: ";
//     int n;
//     cin>>n;
//     cout<<"Enter the col: ";
//     int m;
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the row: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the row: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the row: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the row: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the row: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char(j+64);
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the row: ";
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<char(j+65);
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the row: ";
//     int n;
//     cin>>n;
//     int mid=(n/2);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(mid==i || mid==j){
//                 cout<<"*";
//             }else
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the row: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j|| i+j==n+1){
                cout<<"*";
            }else
            cout<<" ";
        }
        cout<<endl;
    }
}
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the row: ";
//     int n;
//     cin>>n;
//     int k=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<k;
//             k++;
//         }
//         cout<<endl;
//     }
// }