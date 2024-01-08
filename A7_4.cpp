#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int sum=0;
    sum=a[0]+b[1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                if(a[i]+b[j]<sum){
                    sum=a[i]+b[j];
                }
            }
        }
    }
    cout<<sum;
}