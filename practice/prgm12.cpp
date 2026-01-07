#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,2,5,1,3};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<"Array elements are: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<", ";
    }

    int idx;
    try{
        cout<<"Enter the index value which u want to print: ";
        cin>>idx;
        if(idx<0 || idx > n){
            throw string("Entered index is out of bound!!");
        }
        cout<<"Element on the given index is "<<arr[idx]<<endl;
    }
    catch(string e){
        cout<<e<<endl;
    }
    
}