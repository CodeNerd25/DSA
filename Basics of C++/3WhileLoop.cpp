// Write a code to print N number of integers using a While Loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the range : " ;
    cin >> n ;
    int i=1;
    while(i<=n){
        cout<< i << "  " ;
        i++;
    }
    return 0;
}