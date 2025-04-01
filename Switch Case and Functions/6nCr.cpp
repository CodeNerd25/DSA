//Write a C++ Program which returns nCr= ((n!)/((r!)*(n-r)!))

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1 ;
    fact = 1 ;
    for(int i = 1; i<=n ;i++){
        fact = fact * i ;
    }
    return fact ;
}

int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator = (factorial(r))*(factorial(n-r));
    return (numerator)/(denominator);
}

int main(){
    int n , r ;
    cout << "Enter the value of n : ";
    cin >> n ;
    cout << "Enter the value of r : ";
    cin >> r ;
    cout << "The answer is : " << nCr(n,r) <<endl;
}