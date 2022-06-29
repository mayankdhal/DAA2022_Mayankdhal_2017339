#include<iostream>
#include <vector>
using namespace std;
void differncePair(int arr[],int n,int key){
    int count=0;
    bool res=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]-arr[i]==key){
                res = true;
                cout<<arr[i]<<" "<<arr[j]<<" "<<endl;
                count++;
            }
        }
    }
    if(res==false){
        cout<<"no pair found"<<endl;
    }
    else
    cout<<"Numbers of pairs equal to given key is: "<<count<<endl;
}
int main()
{
   int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the  array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key "<<endl;
    cin>>key;
    differncePair(arr,n,key);    
}
