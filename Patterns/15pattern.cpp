/*
Print this following pattern 

A
B B
C C C
D D D D

*/

#include<iostream>
using namespace std;
int main(){
    cout << "Enter the range : ";
    int n ;
    cin>>n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char c = 'A'+i-1;
            cout <<c<< "  ";
            j++;
        }
        cout << endl;
        i++;
    }
}