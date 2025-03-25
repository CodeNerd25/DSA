/*
Print the following Pattern 
    *
   **
  ***
 ****
*****
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j=1;
        int space = n-i;
        while(space){
            cout << " ";
            space--;
        }
        int star = n-i+1;
        while(j<=i){
            cout << "*";
            star++;
            j++;
        }
        cout << "\n";
        i++;
    }
}
