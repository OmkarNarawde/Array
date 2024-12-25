// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter element of array: ";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"enter the number for search";
//     cin>>x;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==x)
//         {
//             cout<<"present"<<endl;
//         }
//     }
// }
//for the input 1 1 2 it print multiple time comment present this will overcome by using the bool.
// Enter size of array : 3
// Enter element of array: 1 1 3
// enter the number for search 1
// present
// present


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bool flag=false;
    int x;
    cout<<"enter the number for search";
    cin>>x;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x)
        {
           flag=true;
        }
    }
        if(flag==true) cout<<"present";
        else cout<<"not present";
}
//output:
// Enter size of array : 3
// Enter element of array: 1 1 3
// enter the number for search 1
// present