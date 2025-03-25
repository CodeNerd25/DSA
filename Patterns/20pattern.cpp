/*
Print the following Pattern 
*
**
***
****
******
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the range : " ;
    cin >> n;
    int i=0;
    while(i<=n){
        int j=1;
        int space = n-i;
        while(space){
            cout << " ";
            space--;
        }
        while(j<=i){
            cout <<"*" ;
            j++;
        }
        cout <<endl;
        i++;
    }
}