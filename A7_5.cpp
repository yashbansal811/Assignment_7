#include<iostream>
using namespace std;
int main()
{
    int a[3]={3,0,1};
    int n=3;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    int miss=sum;
    for(int i=0;i<n;i++){
        miss-=a[i];
    }
    cout<<miss;
}