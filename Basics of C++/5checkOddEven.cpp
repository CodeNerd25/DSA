/*
Write a program to check whether a numnber is even or odd 
*/

#include<iostream>
using namespace std;
int main(){
    cout << "Enter a number : ";
    int a;
    cin >> a;
    if(a % 2 == 0){
        cout << "Even Number";
    }
    else{
        cout  << "Odd Number";
    }

}