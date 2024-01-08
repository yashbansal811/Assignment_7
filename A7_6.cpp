#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=-1;
    int c1,c2;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                c1=j;
            }
            else{
                break;
            }
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                c2=j;
            }
        }   
    }
    if(c1+2==c2){
        cout<<arr[c1+1];
    }
}