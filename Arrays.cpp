#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;

    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    //declare 
    int number[15];
    
    //accessing an array
    // cout<<number[0]<<endl;
    // cout<<number[14];
    
    
    //initialising an array
    // int second[3] = {1,23,4} ;
    int second[15] = {2,7};

    // cout<<"Value at second 2 :" <<second[2];

    // for(int i=0 ; i<15; i++){
    //     cout<<second[i]<<endl;
    // }

    // int fourth[10] = {1};
    // for(int  i = 0; i<10 ; i++){
    //     cout<<fourth[i]<<" ";
    // }

    printArray(second , 15);
    cout<<"Everything is fine" <<endl;



    return 0;
}