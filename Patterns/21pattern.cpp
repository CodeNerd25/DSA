/*
Print the following pattern 

*****
****
***
**
*

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        int star=n-i+1;
        while(j<=star){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}