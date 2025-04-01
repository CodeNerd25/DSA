#include <iostream>
using namespace std;

int main() {
    int amount ;
    cout << "Enter the amount : " ;
    cin >> amount ;
    int hundred = 0, fifty = 0, twenty = 0, remainder;

    switch (1) {
        case 1:
            hundred = amount / 100;
            remainder = amount % 100;
        
        case 2:
            fifty = remainder / 50;
            remainder = remainder % 50;

        case 3:
            twenty = remainder / 20;
            remainder = remainder % 20;
    }

    cout << "₹100 notes: " << hundred << endl;
    cout << "₹50 notes: " << fifty << endl;
    cout << "₹20 notes: " << twenty << endl;
}

