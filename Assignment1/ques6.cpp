#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){cin>>arr[i];}
    int target;
    cout<<"Enter elements to search"<<endl;
    cin>>target;

    int low=0;
    int high=n-1;
    int ind=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            ind=mid;
            break;
        }
        else if(arr[mid]>target){
            if(arr[mid]>=arr[high]) low=mid+1;
            else high=mid-1;
        }
        else{
            if(arr[mid]<arr[low]) high=mid-1;
            else low=mid+1;
        }
    }

    cout<<ind<<endl;

    return 0;
}