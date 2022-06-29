#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string arr;
    cout<<"Enter the string with duplicate element"<<endl;
    cin>>arr;
    int count[250]={0};
    int max=0,i;
    char res;
    for( i=0;i<arr.length();i++){
            count[arr[i]]++;
            if(max<count[arr[i]]){
                max=count[arr[i]];
                res = arr[i];
            }
        }
    cout<<res<<" "<<count[res];

   
}
