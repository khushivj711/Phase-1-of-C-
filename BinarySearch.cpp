#include<iostream>
using namespace std;

int BinarySearch(int arr[] ,  int size , int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        //go to right vala part
        if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }

        mid = (start + end) / 2 ;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};
    
    // int key ;
    // cout<<"Enter key value :"<<endl;
    // cin>>key ;

    int Evenindex = BinarySearch(even , 6 , 8);
    cout<<"Index of 8 is :" << Evenindex << endl;

    int OddIndex = BinarySearch(odd , 5 , 20);
    cout<<"Index of 20 is :"<< OddIndex << endl;
}