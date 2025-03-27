#include<iostream>
using namespace std;
int main(){
    int i=7;
    cout<<(i++)<<endl;
    //7, then i=8
    cout<<(++i)<<endl;
    //9, then i=9
    cout<<(i--)<<endl;
    //9, then i=8
    cout<<(--i)<<endl;
    //7, then i=7
    cout << i;
    // Look, now i=7
}