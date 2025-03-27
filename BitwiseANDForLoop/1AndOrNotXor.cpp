#include<iostream>
using namespace std;
int main() {
	int a,b;
	cout << "Enter the value of a : ";
	cin >> a;
	cout << "Enter the value of b : ";
	cin >> b;
	cout << "AND of a and b is : " <<(a&b)<<endl;
	cout << "OR of a and b is : " <<(a|b)<<endl;
	cout << "NOT of a is : " <<(~a)<<endl;
	cout << "XOR of a and b is : " <<(a^b)<<endl;
}