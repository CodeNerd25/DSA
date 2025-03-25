/*
Print the following Pattern
****
 ***
  **
   *
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the range : ";
	cin >> n;
	int i=1;
	while(i<=n) {
		int j=1;
		char space=i-1;
		while(space) {
			cout << " ";
			space--;
			j++;
		}
		int star=n-i+1;
		while(j<=star) {
			cout << "*";
			star--;
			j++;
		}
		cout << endl;
		i++;
	}
}