/*

Print this pattern
1
22
333
4444

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the range : " ;
    cin >> n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}