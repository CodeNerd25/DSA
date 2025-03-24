/*Print this pattern
1
2 3
3 4 5
4 5 6 7
*/  

/*
There are two ways to deal with this problem 
--> Here we used another variable value to print the pattern

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the range : ";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        int value=i;
        while(j<=i){
            cout <<value<<"  ";
            value++;
            j++;
        }
        cout << "\n";
        i++;
    }
}*/
// This is the optimal way to print the pattern

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the range : ";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout <<i+j<<"  ";
            j++;
        }
        cout << "\n";
        i++;
    }
}

