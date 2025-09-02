#include<iostream>
#include<unordered_map>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    
    int n,m;
    cout<<"Enter no. of elements in array 1(n) & no. of elements in array 2(m):";
    cin>>n>>m;
    int arr1[n],arr2[m];

    cout<<"Enter elements of array 1:";
    for(int i=0;i<n;i++) cin>>arr1[i];

    cout<<"Enter elements of array 2:";
    for(int i=0;i<m;i++) cin>>arr2[i];

    unordered_map<int,int> mpp;
    for(auto it:arr1) mpp[it]++;
    
    int i=0;
    for(auto it:arr2){
        if(mpp.find(it)!=mpp.end()){
            for(int x=0;x<mpp[it];x++){
                arr1[i++]=it;
            }
            mpp.erase(it);
        }
    }

    vector<int> leftovers;
    for(auto it:mpp){
        for (int x = 0; x < it.second; x++) {
            leftovers.push_back(it.first);
        }
    }

    sort(leftovers.begin(),leftovers.end());

    for(auto it:leftovers){
        arr1[i++]=it;
    }

    cout<<"Sorted Array:  ";
    for(auto it:arr1) cout<<it<<" ";

    return 0;
}
