#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx])
                minIdx=j;
        }
        swap(arr[i],arr[minIdx]);
    }
}

void bubbleSort(int arr[], int n){
    bool swapped=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                swapped=1;
        }
        if(swapped==0)
            break;      //already swapped
    }
}

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for( ; j>=0;j--){
            if(temp<arr[j])
                arr[j+1]=arr[j];
            else
                break;
        }
        arr[j+1]=temp;
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int array[6]={3,25,17,0,20,9};

    cout<<"Array after Selection Sort: "<<endl;
    selectionSort(array,6);
    printArray(array,6);

    cout<<"Array after Bubble Sort: "<<endl;
    bubbleSort(array,6);
    printArray(array,6);

    cout<<"Array after Insertion Sort: "<<endl;
    insertionSort(array,6);
    printArray(array,6);

}