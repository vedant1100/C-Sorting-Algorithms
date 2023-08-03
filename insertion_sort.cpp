#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no.of elements : ";cin>>n;
    int array[n];
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=1;i<n;i++){
        int temp=array[i];
        int j=i-1;
        while(array[j]>temp && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }

    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<"\t";
    }
    return 0;
}