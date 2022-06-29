#include<iostream>
using namespace std;
void sum2(int arr[],int n){
    bool res= false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(arr[i]+arr[j]==arr[k]){
                    res = true;
                    int a= i+1;
                    int b=j+1;
                    int c=k+1;
                    if(a<b && b<c){
                    cout<<" result is "<<a<<" "<<b<<" "<<c<<endl;
                    break;
                    }
                }
            }
        }
    }
    if(res==false){
        cout<<" no sequence found"<<endl;
    }
}
int main()
{
   int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the sorted array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum2(arr,n);    
}
