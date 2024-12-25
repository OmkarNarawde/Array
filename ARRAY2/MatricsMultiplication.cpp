#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"Enter the rows of 1st matrics: ";
   cin>>m;
   int n;
   cout<<"Enter the colomns of 1st matrics: ";
   cin>>n;
   int p;
   cout<<"Enter the rows of 2nd matrics: ";
   cin>>p;
   int q;
   cout<<"Enter the colomns of 2nd matrics: ";
   cin>>q;
if(n==p){
    int a[m][n];
    cout<<"Enter the element of 1st matrics: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int b[p][q];
    cout<<"Enter the element of 2nd matrics: ";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
                for(int k=0;k<n;k++){
                res[i][j]+=a[i][k]*b[k][j];
        }
    }
}
cout<<endl;
cout<<"Resultant matrix is: "<<endl;
 for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<"  ";
        }
         cout<<endl;
    }
}
else{
    cout<<"Matrics maultiplication not possible thiat matrics.";
}
}