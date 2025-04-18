#include<iostream>
using namespace std;

int deleteDuplicates(int n,int arr[]){
    int i = 0 ;
    for(int j = 1;j<n;j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return (i+1);
}

int main(){
    int n ;
    cout << "Enter the size of the array : ";
    cin >> n ;
    cout << "Enter the array elements : ";
    int arr[100];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << "The new size of the array is "<<deleteDuplicates(n,arr)<< endl;
    int newSize=deleteDuplicates(n,arr);
    cout << "The modified array is "<<endl;
    for(int i=0;i<newSize;i++){
        cout << arr[i]<< " \t " ; 
    }
}