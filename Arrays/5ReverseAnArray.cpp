//Write a C++ program to reverse an array of any length

#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start = 0 ;
    int  end = size - 1 ;
    while(start <= end){
        swap(arr[start],arr[end]) ;
        start++ ;
        end -- ;
    }
    cout << endl;
}

void printArray(int arr[],int size){
    cout << "The reversed array is : "<< endl;
    for(int i = 0;i < size; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={-2,0,5,6,8,9};
    reverseArray(arr,5);
    reverseArray(brr,6);
    printArray(arr,5);
    printArray(brr,6);
}