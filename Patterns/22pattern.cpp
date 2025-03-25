/*
Print the following Pattern 
****
 ***
  **
   *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the range : " ;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        int space = i-1;
        while(j<=space){
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