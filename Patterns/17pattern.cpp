/*
Print the following pattern 
A 
B C
C D E
D E F G 

*/

#include<iostream>
using namespace std;
int main(){
    cout<< "Enter the range : ";
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        char value = 'A'+i+j-2;
        while(j<=i){
            cout << value<< "  ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
}