// This is a Simple code to understand the Switch cases and Switch Statement
#include<iostream>
using namespace std;
int main(){
    int num = 2;
    char ch = 'A';
    switch (num)
    {
    case 1:
        cout << "First Case" << endl;
        break;
    case 2:
        switch (ch)
        {
        case 'A':
            cout << "Character is : "<< ch << endl;
            break;
        case 'B':
            cout << "Character is : "<< ch << endl;
            break;
        default:
            cout << "No Matches" << endl;
            break;
        }
        cout << "Second Case" << endl;
        break;
    default:
        cout << "Default Case" << endl;
        break;
    }
}
//The output gives the answer Character is : A  \n Second Case