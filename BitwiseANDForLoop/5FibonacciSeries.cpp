#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the range : " ;
    cin >> n ;
    int a = 0 , b = 1 ;
    cout << a << " " << b << " " ;
    for(int i = 0 ; i < n ; i++){
        int c = a + b ;
        cout << c << " ";
        a = b;
        b = c;
    }
}