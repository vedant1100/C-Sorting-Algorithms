#include<iostream>
using namespace std;

void merge(int myarr[], int left, int middle, int right){
    int i=left; //starting index of left subarray(left=0)
    int j=middle+1; //starting index of right subarray(right=mid+1)
    int k=left; //starting index of temperory array(left=0)

    int n=(right-1)+1;
    int temp[n]; //temporary

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

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

int main(){
    int n;
    cout<<"enter number of elements : "; cin>>n;
    int array[n];

    cout<<"enter "<<n<<" elements : ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"sorted array : ";
    mergeSort(array,0,(n-1));

    cout << "Sorted array : ";
    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    return 0;
}