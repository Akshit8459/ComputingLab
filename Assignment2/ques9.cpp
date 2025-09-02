#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0) sum=0;
        ans=max(ans,sum);
    }

    cout<<ans;
    return 0;
}