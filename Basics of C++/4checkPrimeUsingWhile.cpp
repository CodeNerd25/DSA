//Check wheather a number is prime or not using while loop
#include<iostream>
using namespace std;
int main(){
    cout << "Enter the number to be checked : ";
    int n ;
    cin >> n;
    int i = 2;
    while(i<n){
        if(n%i == 0){
            cout << "Not prime for "<<i<< "  ";
        }
        else{
            cout<< "Prime for "<<i<<endl;
        }
        i++;
    }
}