#include<iostream>
using namespace std;

void SelectionSort(int arr[] , int n ){

    for( int i = 0 ; i < n-1 ; i++){
        int minIndex = i;

        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
        
    }

}

int main(){
    int arr[9] = {29 , 72, 98,13,87,66,52,51,36};
    SelectionSort(arr , 9);

    cout << "Sorted array: ";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

