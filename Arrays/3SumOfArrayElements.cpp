#include<iostream>
using namespace std;

int SumOfArrayElements(int arr[],int n){
    int sum = 0 ;
    for(int i=1;i<=n;i++){
        sum = sum+arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[100];
    cout << "Enter the array elements : ";
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    cout<< "The sum of the array elements is : "<<SumOfArrayElements(arr,n)<< " ";
}