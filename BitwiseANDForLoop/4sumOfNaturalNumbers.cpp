#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the range : ";
    cin >> n ;
    int sum = 0 ;
    for(int i=1;i<=n;i++){
        sum += i ;
    }
    cout << "The sum of the numbers is : " << sum ;
}