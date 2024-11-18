#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int> &arr, int n ){

    for(int i = 1 ; i<n ; i++){
        bool swapped = false;
        for(int j = 0 ; j < n-i ; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }

        }
        if(swapped==false){
            break;
        }
    }
}


int main(){
    vector<int> arr = {10,1,7,6,14,9};

    int n = arr.size();

    BubbleSort(arr , n);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i] << " ";
    }


    return 0;
}