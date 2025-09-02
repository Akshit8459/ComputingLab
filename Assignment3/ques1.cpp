#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:  ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements from 0 to n:  ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=n;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        ans=ans^i;
    }
    cout<<"MISSING NUMBER FROM THE ARRAY IS:"<<ans<<endl;
    return 0;
}

