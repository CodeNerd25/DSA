// Write a program in C++ to print the power or a user defined input

#include<iostream>
using namespace std;
int power(int num1 , int num2){
    int ans = 1 ;
    for(int i = 1; i<=num2; i++){
        ans = ans * num1 ;
    }
    return ans ;
}
int main(){
    int a , b;
    cout << "Enter the value of a : " ;
    cin >> a;
    cout << "Enter the value of b : " ;
    cin >> b;
    cout << "The value of "<<a<< "^"<<b<<" is : "<<power(a,b);
}