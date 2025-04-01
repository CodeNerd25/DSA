// Write the program to print the maximum and minimum element in an array 

#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[], int size){
    int maxi = INT_MIN ;
    for(int i=0;i<size;i++){
        // if(arr[i]>max){
        //     max = arr[i];
        // }
        maxi = max(maxi,arr[i]);
    }
    return maxi ;
}
int getMin(int arr[], int size){
    int mini = INT_MAX ;
    for(int i=0;i<size;i++){
        // if(arr[i]<min){
        //     min = arr[i];
        // }
        mini = min(mini,arr[i]);
    }
    return mini ;
}

int main(){
    cout << "Enter the size of the array : " << endl ;
    int n ;
    cin >> n ;
    int num[100] ;
    cout << "Enter the array elements : " << endl ;
    for(int i=0;i<n;i++){
        cin >> num[i] ;
    }
    cout << "Maximum "<<getMax(num,n)<<endl;
    cout << "Minimum "<<getMin(num,n)<<endl;
}