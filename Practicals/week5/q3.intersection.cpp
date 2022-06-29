#include <bits/stdc++.h>
using namespace std;
void intersection(vector<int> arr1,vector<int> arr2){
    int i=0;
    int j=0;
    int n=arr1.size();
    int m=arr2.size();
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        if(arr1[i]>arr2[j]){
            j++;
        }
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }

}
int main(){
    int n,m;
    cout<<"Enter the number of elements of first array"<<endl;
    cin>>n;
    vector<int> arr1(n);
    cout<<"Enter elements of first array"<<endl;
    for(auto &i:arr1){
         cin>>i;
     }
    cout<<"Enter the number of elements of second array"<<endl;
      cin>>m;
     vector<int> arr2(m);
    cout<<"Enter elements of first array"<<endl;
    for(auto &i:arr2){
         cin>>i;
     }
    intersection(arr1,arr2);

}
