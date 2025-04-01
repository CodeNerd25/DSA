// Write a C++ program to print counting number from 1 to n

#include<iostream>
using namespace std;

void printCounting(int n){
    for(int i =1; i<=n; i++){
        cout<< i << "  ";
    }
    cout << endl ;
}

int main(){
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;
    printCounting(n);
}