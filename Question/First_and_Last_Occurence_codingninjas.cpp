#include<iostream>
using namespace std;

int FirstOcc(int arr[] , int n , int key){
    int start = 0 ,  end = n-1 ;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if( arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid]> key){
            end = mid -1;
        }

        mid = start + (end - start)/2;

    }
    return ans;
}


int LastOcc(int arr[] , int n , int key){
    int start = 0 ,  end = n-1 ;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if( arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid]> key){
            end = mid -1;
        }

        mid = start + (end - start)/2;

    }
    return ans;
}

int main(){

    int even[12] = {1,2,3,3,3,3,3,3,3,3,3,5};

    cout<<"First Occurence of 3 is at index :"<< FirstOcc(even , 12 , 3) << endl;


    cout<<"Last occurence of 3 at index is : "<< LastOcc(even , 12 , 3) << endl;
    return 0;

}