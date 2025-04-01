#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    for(int i = 2; i<sqrt(num);i++){
        if(num%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;
    if(isPrime(n)){
        cout<< "Prime Number "<< endl;
    }
    else{
        cout << "Not a Prime Number " ;
    }
}