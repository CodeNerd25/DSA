#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

void ArrayAlternate(int arr[], int size) {
    for (int i = 0; i < size-1; i += 2) { 
        swap(arr[i], arr[i + 1]); 
    }
}

int main() {
    int even[8] = {12, 42, 34, 54, 66, 87, 78, 58};
    int odd[5] = {25, 86, 78, 95, 102};

    cout << "Original even array: ";
    printArray(even, 8);
    ArrayAlternate(even, 8);
    cout << "Modified even array: ";
    printArray(even, 8);

    cout << "Original odd array: ";
    printArray(odd, 5);
    ArrayAlternate(odd, 5);
    cout << "Modified odd array: ";
    printArray(odd, 5);

    return 0;
}
