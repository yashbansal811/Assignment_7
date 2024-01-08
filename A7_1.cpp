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
    int e=0,o=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    cout<<"Odd numbers="<<o<<endl;
    cout<<"Even numbers="<<e;
}