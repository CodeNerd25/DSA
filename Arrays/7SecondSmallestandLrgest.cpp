#include<bits/stdc++.h>
using namespace std;

int SecondLargest(int a[],int n){
    int largest = a[0] ;
    int slargest = -1 ;
    for(int i = 1; i<n; i++){
        if(a[i]>largest){
            slargest = largest ;
            largest = a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];
        }
    }
    return slargest ;
}

int SecondSmallest(int a[],int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i = 1;i<n;i++){
        if(a[i]<smallest){
            ssmallest = smallest ;
            smallest = a[i];
        }
        else if(a[i]!=smallest && a[i]<ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}
int main(){
    int n ;
    cout << "Enter the size of the array : ";
    cin >>n;
    int arr[100];
    cout << "Enter the array elements : ";
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int one = SecondLargest(arr,n);
    int two = SecondSmallest(arr,n);
    cout << "The second largest element is : "<<one<<endl;
    cout << "The second smallest element is : "<<two<<endl;
}