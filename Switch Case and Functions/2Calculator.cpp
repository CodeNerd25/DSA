#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the value of a: " ;
    cin >> a ;
    cout << "Enter the value of b : " ;
    cin >> b ;
    char op;
    cout << "Enter the operation you want to perform : ";
    cin >> op;
    switch(op){
        case '+':
            {cout << "The addition of "<< a << " and "<< b << " is " <<(a+b)<< endl;}
            break;
        case '-':
            cout << "The substraction of "<< a << " and "<< b << " is " <<(a-b)<< endl;
            break;
        case '*':
            cout << "The multiplication of "<< a << " and "<< b << " is " <<(a*b)<< endl;
            break;
        case '/':
            cout << "The division of "<< a << " and "<< b << " is " <<(a/b)<< endl;
            break;
        case '%':
            cout << "The remainder of "<< a << " and "<< b << " is " <<(a%b)<< endl;
            break;
        default :
            cout << "Invalid Selection "<< endl;
            break;
    }
}