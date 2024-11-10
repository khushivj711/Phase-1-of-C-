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
    // int number[15];
    
    //accessing an array
    // cout<<number[0]<<endl;
    // cout<<number[14];
    
    
    //initialising an array
    // int second[3] = {1,23,4} ;
    // int second[15] = {2,7};

    // cout<<"Value at second 2 :" <<second[2];

    // for(int i=0 ; i<15; i++){
    //     cout<<second[i]<<endl;
    // }

    // int fourth[10] = {1};
    // for(int  i = 0; i<10 ; i++){
    //     cout<<fourth[i]<<" ";
    // }

    // printArray(second , 15);
    // cout<<"Everything is fine" <<endl;

    //how to find size of array

    // int secondSize = sizeof(second) / sizeof(int);
    // cout<<secondSize;



    char ch[15] = {'a' , 'b' , 'c' , 'd'};
    cout<<ch[3];

    for(int i = 0; i<15 ; i++){
        cout<<ch[i]<<" " ;
    }

    double firstD[5] ;
    float firstF[5];
    bool firstB[5];

    
    return 0;
}