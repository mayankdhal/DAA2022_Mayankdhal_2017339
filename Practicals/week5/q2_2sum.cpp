#include <bits/stdc++.h>
using namespace std;
void sum2(vector<int> arr,int n,int target){
    int low=0;
    int high=n-1;
    int sum=0;
    while(low<high){
        sum=arr[low]+arr[high];
        if(sum==target){
            cout<<"i is "<<arr[low]<<" j is "<<arr[high]<<endl;
            break;
        }
        else if(sum>target)
        {
            high--;
        }
        else{
            low++;
        }
    }
}


int main(){
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr){
        cin>>i;
    }
    sort(arr.begin(),arr.end());
    int target;
    cout<<"enter target"<<endl;
    cin>>target;
    sum2(arr,n,target);
}
