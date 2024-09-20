#include <iostream>
using namespace std;


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

    for(int i=0 ; i<15; i++){
        cout<<second[i]<<endl;
    }

    cout<<"Everything is fine" <<endl;
    return 0;
}