/*
Print the following pattern

D  
C  D  
B  C  D  
A  B  C  D 

*/

#include<iostream>
using namespace std;
int main(){
    cout << "Enter the range : ";
    int n;
    cin >> n;
    int i =1;
    char start = 'A'+n-i;
    while(i<=n){
        int j=1;
        char start = 'A'+n-i;
        while(j<=i){
            cout << start << "  "; 
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}