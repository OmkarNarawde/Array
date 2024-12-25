// #include<iostream>
// using namespace std;
// int main(){
//     //print all alphabets with their ascii values
//     for(int  i=65;i<=90;i++){
//         cout<<(char)i<<" "<<i<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 0;
	while (i < 26) {
		cout << "ASCII value of " << (char)(i + 'A') << " is " << (int)(i + 'A') << endl;
		i++;
	}
}