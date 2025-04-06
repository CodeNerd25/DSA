#include<bits/stdc++.h>
using namespace std;
bool checkIsSorted(int arr[],int n){
    for(int i = 1;i<n;i++){
        if(arr[i] >= arr[i-1]){

        }
        else{
            return false ;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin >>n;
    int arr[100];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    if(checkIsSorted(arr,n)==true){
        cout << "The array is sorted "<<endl;
    }
    else{
        cout << "The array is not sorted " <<endl;
    }
}