/*
Print this pattern
111
222
333
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the range : ";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout << "\n";
        i++;
    }
}
