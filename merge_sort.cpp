#include<iostream>
using namespace std;

void merge(int myarr[], int left, int middle, int right){
    int i=left; //starting index of left subarray(left=0)
    int j=middle+1; //starting index of right subarray(right=mid+1)
    int k=left; //starting index of temperory array(left=0)

    int temp[5];

    while(i<=middle && j<=right){
        if(myarr[i]<=myarr[j]){
            temp[k]=myarr[i];
            i++;k++;
        }
        else{
            temp[k]=myarr[j];
            j++;k++;
        }
    }

    while ((i<=middle)){
        temp[k]=myarr[i];
        i++;k++;
    }

     while ((j<=right)){
        temp[k]=myarr[j];
        j++;k++;
    }

    for(int s=left;s<=right;s++){
        myarr[s]=temp[s];
    }
    
}

void mergeSort(int arr[], int l, int r){  //here l and r values are passed by address and not by values
    if(l<r){ //l<r condition is provided so that the statement always runs true and merge sort function runs until all elements of an array are covered
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

int main(){
    int array[5];
    cout<<"enter 5 elements : ";
    for(int i=0;i<5;i++){
        cin>>array[i];
    }

    cout<<"sorted array : ";
    mergeSort(array,0,4); // arguments are passed by address

    cout << "Sorted array : ";
    for(int i=0;i<5;i++){
        cout << array[i] << " ";
    }
    return 0;
}