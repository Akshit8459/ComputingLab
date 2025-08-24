#include<iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size();
    int n2=nums2.size();
    int total=n1+n2;
    int half=total/2;
    vector<int> A=n1<n2?nums1:nums2;
    vector<int> B=n1<n2?nums2:nums1;
    int low=0,high=A.size();
    while(low<=high){
        int i=(low+high)/2;
        int j=half-i;
        int l1=i>0?A[i-1]:INT_MIN;
        int r1=i<A.size()?A[i]:INT_MAX;
        int l2=j-1>=0?B[j-1]:INT_MIN;
        int r2=j<B.size()?B[j]:INT_MAX;
        if(l1<=r2 && l2<=r1){
            if(total%2==1) return (double)min(r1,r2);
            else{return (max(l1,l2)+min(r1,r2))/2.0;} 
        }
        else if(l1>r2) high=i-1;
        else low=i+1;
    }
    return -1.0;
}
int main() {
    int n, m;
    cout << "Enter number of elements in first array:" << endl;
    cin >> n;
    vector<int> A(n);
    cout << "Enter elements of first array in sorted order:" << endl;
    for (int i = 0; i < n; i++) {cin >> A[i];}
    cout << "Enter number of elements in second array:" << endl;
    cin >> m;
    vector<int> B(m);
    cout << "Enter elements of second array in sorted order:" << endl;
    for (int i = 0; i < m; i++) {cin >> B[i];}
    double median = findMedianSortedArrays(A, B);
    cout << "Median of the array is: " << median << endl;
    return 0;
}
