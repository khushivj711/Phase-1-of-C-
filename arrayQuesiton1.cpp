#include <iostream>
using namespace std;

//INT_MIN = minimum value padi h int ki
//INT_MAX = maximum value padi h int ki by default

int getMax(int num[] , int n){

    int max = INT8_MIN;

    for(int i =  0 ; i<n ; i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[] , int n){

    int min = INT8_MAX;

    for(int i =  0 ; i<n ; i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    int size;

    cin>>size;

    
    int num[100];

    //taking input in array
    for(int i = 0 ; i<size ; i++){
        cin>>num[i];
    }

    cout<<"Maximum value is: "<<getMax(num , size)<<endl;
    cout<<"Minimum value is: "<<getMin(num , size)<<endl;
    return 0;
}