#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;
    int arr[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=arr2[n-i-1];
        cout<<arr[i]<<endl;
    }
}