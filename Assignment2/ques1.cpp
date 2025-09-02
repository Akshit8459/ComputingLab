#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter amount of objects to store:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter values to store in array where Red(0), White(1) and Blue(2)"<<endl;
    for(int i=0;i<n;i++){cin>>arr[i];}
    int a=0,b=0,c=0;
    for(auto it:arr){
        if(it==0) a++;
        else if(it==1)b++;
        else if(it==2)c++;
    }
    int i=0;
    while(a--){arr[i++]=0;}
    while(b--){arr[i++]=1;}
    while(c--){arr[i++]=2;}
    cout<<"Sorted Array:"<<endl;
    for(auto it:arr){cout<<it<<" ";}
    return 0;
}