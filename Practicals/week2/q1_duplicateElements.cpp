#include<iostream>
#include <vector>
using namespace std;
int duplicate_no(int arr[],int n,int target,int searchFirst){
    int low = 0;
    int high=n-1;
    int res=-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]==target){
              res = mid;
             if(searchFirst){
                 high=mid-1;
             }
             else{
                 low=mid+1;
             }
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
}
int main(){
    int n,key;
    cout<<"ENter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to find"<<endl;
    cin>>key;
    int first=  duplicate_no(arr,n,key,1);
    int second=  duplicate_no(arr,n,key,0);
    cout<<"First occurence is: "<<first<<endl;
    cout<<"Second occurence is: "<<second<<endl;
    cout<<"Number of copies of " <<key<<" in logn complexity is: "<<endl;
    cout<<second-first+1<<endl;
}
