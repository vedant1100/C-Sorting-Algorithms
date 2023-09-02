#include<iostream>
using namespace std;

 int partition(int arr[], int l, int r){
        int pivot=arr[r];
        int i=l-1;

        for(int j=l;j<r;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[r]);
        return i+1;
    }

    void quicksort(int array[], int l, int r){  //here l and r values are passed by address and not by values
        if(l<r){  //l<r condition is provided so that the statement always runs true and merge sort function runs until all elements of an array are covered
            int pivot= partition(array,l,r);
            quicksort(array,l,pivot-1);
            quicksort(array,pivot+1,r);
        }  
    }


int main(){
    int arr[5];
    cout<<"enter 5 elements : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,4); // arguments are passed by address

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}