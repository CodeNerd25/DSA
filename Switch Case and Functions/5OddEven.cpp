#include<iostream>
using namespace std;

bool isEven(int n){
    if(n&1){
        return 0 ;
    }
    return 1 ;
}

int main(){
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;
    if(isEven(n)){
        cout << "Even ";
    }
    else{
        cout << "Odd";
    }
}