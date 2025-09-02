#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    if(n%2==0) return 0;
    cout<<"Enter an array with pair of integers except for 1 integer:"<<endl;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int low=0,high=n;
    int ans=-1;
    while(low<high){
        int mid=low+((high-low)/2);
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
            ans=mid;
            break;
        }
        else if(arr[mid]==arr[mid+1]){
            if(mid%2==0) low=mid+1;
            else high=mid-1;
        }
        else{
            if(mid%2==0) high=mid-1;
            else low=mid+1;
        }
    }
    ans=(ans==-1?-1:arr[ans]);
    cout<<ans<<endl;

}