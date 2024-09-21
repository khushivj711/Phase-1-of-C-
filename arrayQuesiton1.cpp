#include <iostream>
using namespace std;

//INT_MIN = minimum value padi h int ki
//INT_MAX = maximum value padi h int ki by default

//There is bydefault function to find out the max and min value in array
int getMax(int num[] , int n){

    int maxi = INT8_MIN;

    for(int i =  0 ; i<n ; i++){

        maxi = max(maxi , num[i]);
        // if(num[i]>max){
        //     max = num[i];
        // }
    }
    return maxi;
}

int getMin(int num[] , int n){

    int mini = INT8_MAX;

    for(int i =  0 ; i<n ; i++){
        mini = min(mini , num[i]);
        // if(num[i]<min){
        //     min = num[i];
        // }
    }
    return mini;
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