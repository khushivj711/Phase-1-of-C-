#include<iostream>
using namespace std;

int getPivot(int arr[] , int n){
    int s = 0 ;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]>arr[0]){
            s = mid + 1 ;
        }
        else{
            e = mid;
        }
        mid = s +(e-s)/2;
    }
    return s;
}

int BinarySearch(int arr[] , int s , int e , int k){
    int start = s; 
    int end = e ;
    int mid = s + (e-s)/2;

    while(start<=end){
        if(arr[mid] == k ){
            return mid;
        }
        else if(arr[mid]<k){
            s = mid+1;
        }
        else{
            e = mid-1;

        }
        mid = s +(e-s)/2;
    }
    return -1;
}

int Search(int arr[] , int n , int k){
    int pivot = getPivot(arr , n);

    if(k >= pivot && k<=arr[n-1]){
        return BinarySearch(arr , pivot , n-1 , k);
    }
    else{
        return BinarySearch(arr , 0 , pivot-1 , k);
    }
    
}

int main(){

    int arr[6] = {7,8,9,1,2,3};

    cout<<"Find the k element : " <<Search(arr , 6 , 1)<< endl;

    return 0;
}