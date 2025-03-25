/*
Print this following pattern 

A
B C
D E F
G H I J

*/

#include<iostream>
using namespace std;
int main(){
    cout << "Enter the range : ";
    int n ;
    cin>>n;
    int i=1;
    char c = 'A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout <<c<< "  ";
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
}