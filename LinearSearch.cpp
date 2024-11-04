#include<iostream>
using namespace std;


int LinearSearch(int arr[] ,int size , int key){
    for(int i = 0 ; i<size ; i++){
        if(arr[i] == key){
            cout<< "Found" << arr[i]<<endl;
            return i;
        }    
    }
    cout<< "Not Found";
    return -1;
}

int main(){

    int key;
    int arr[5] = {1,23,53,45,43};
    cout<<"Enter the key value :"<<endl;
    cin>>key;
    int result = LinearSearch(arr , 5 , key);

    if(result == -1){
        cout<<"Key not found "<<endl;
    }
    else
    {
        cout<<"Key Found at index : "<<result <<endl;
    }
    
    return 0;
    
}