/*
Print the following pattern

A B C
B C D
C D E

*/

#include<iostream>
using namespace std;
int main(){
    cout <<"Enter the range : ";
    int n ;
    cin >> n ;
    int i=1;
    while(i<=n){
        int j=0;
        char value = 'A'+ i+j-1;
        while(j<n){
            cout << value;
            value++;
            j++;
        }
        cout<<endl ;
        i++;
    }
}