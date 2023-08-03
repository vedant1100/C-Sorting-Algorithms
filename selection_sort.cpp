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

    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<"\t";
    }
    return 0;
}