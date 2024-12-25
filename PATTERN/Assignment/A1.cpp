#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the rows: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
// Enter the rows: 4
// 1111
// 2222
// 3333
// 4444

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the rows: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 && j==1){
//                 cout<<j;
//             }
//         }
//         cout<<endl;
//     }
// }
// Enter the rows: 4
// 1

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the rows: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//                 cout<<char(j+64);
//             }
//                cout<<endl;
//         }

//     }
// Enter the rows: 4
// A
// AB
// ABC
// ABCD


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the rows: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if (i%2!=0){
//             for(int j=1;j<=i;j++){
//                 cout<<j;
//         }cout<<endl;
//         }else{
//             for(int j=1;j<=i;j++){
//                 cout<<char(j+64);
//         }
//        cout<<endl;
//     }
//     }
// }
// Enter the rows: 4
// 1
// AB
// 123
// ABCD


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the rows: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//               cout<<"*";
//         }cout<<endl;
//     }
//     for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++){
//               cout<<"*";} cout<<endl;
//               }
//     }
// Enter the rows: 4
// *
// **
// ***
// ****
// ***
// **
// *


// #include<iostream>
// using namespace std;

// int main(){
//   int m=4;
//   int n=6;

//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       if(j==0 || j==m-1 || i==0 || i==n-1){
//         cout<<"*";
//        }
//        else{
//        cout<<" ";
//        }
      
//     }
//     cout<<endl;
//   }
// }
// ****
// *  *
// *  *
// *  *
// *  *
// ****



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Row: ";
//     cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<char(k+64);
//     }
//     cout<<endl;
//   }
// }
// Enter the Row: 4
//    A
//   AB
//  ABC
// ABCD



// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the rows: ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++){
//               cout<<" ";
//         }for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//               cout<<" ";} 
//               for(int k=1;k<=n-i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//               }
//     }
// Enter the rows: 4
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *