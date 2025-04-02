//Write a C++ program which returns 1, if an array element is present and 0, if not present 

#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[100];
    cout << "Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    int key;
    cout << "Enter the element to be searched : ";
    cin >> key ;
    bool found=linearSearch(arr,100,key);
    if(found){
        cout << "Element is present"<<endl;
    }
    else{
        cout << "Element is not present"<<endl;
    }
}