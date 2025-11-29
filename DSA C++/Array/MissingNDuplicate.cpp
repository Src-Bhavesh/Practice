#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,3,8};
    int n =sizeof(arr)/sizeof(int);
    int repeating = -1;
    int missing = -1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                repeating=arr[i];
            }
        }
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }

    int req_sum=(n*(n+1))/2;
    missing=req_sum-sum+repeating;

    cout<<missing;
    cout<<repeating; 
    return 0;
}