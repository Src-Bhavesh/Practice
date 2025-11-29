#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        int j;
        cin>>j;
        arr[i]=j;
    }
    int ar[n];
    int l=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            ar[l]=arr[i];
            l++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            ar[l]=0;
            l++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}