#include <iostream>
using namespace std;

int firstOccurence(int low,int high,int arr[],int target){
    int ind=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]==target){
            ind=mid;
            high=mid-1;
        }
        if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return ind;
}

int lastOccurence(int low,int high,int arr[],int target){
    int ind=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]==target){
            ind=mid;
            low=mid+1;
        }
        if(arr[mid]<target) low=mid+1;
        else if(arr[mid]>target) high=mid-1;
    }
    return ind;
}

int main(){
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    cout<<"Enter elements in increasingly sorted order:"<<endl;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter value of element whose position is to be found"<<endl;
    cin>>target;

    int start=firstOccurence(0,n,arr,target),end=lastOccurence(0,n,arr,target);

    cout<<start<<" "<<end<<endl;

    return 0;
}