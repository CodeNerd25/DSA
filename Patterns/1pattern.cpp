/*Print pattern 1
****
****
****
****
Here, the number of rows and columns are same 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    int i=0;
    while(i<=n-1){
        int j=0;
        while(j<=n-1){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}