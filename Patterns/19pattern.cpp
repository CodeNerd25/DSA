/*
Print the following pattern 
A B C 
B C D
C D E 
This is same as one of the previous patterns, make sure the method is different this time
*/

#include<iostream>
using namespace std;
int main(){
    cout << "Enter the range : " ;
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        char start = 'A'+n-i;
        while(j<=n){
            cout <<start<< "  ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}
