#include<iostream>
using namespace std;
int counter =0;
int partition(int array[],int start,int end){
      int pivot = array[end];
    int i = start - 1;

    for(int j = start; j <= end - 1; j++){
        counter++;
        if (array[j] <= pivot){
            i = i + 1;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    int temp = array[i+1];
    array[i+1] = array[end];
    array[end] = temp;
    return i + 1;
}
void quickSort(int arr[],int start,int end){
    if(start<end){
        int pivot = partition(arr,start,end);
        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot+1,end);
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<counter;

}
