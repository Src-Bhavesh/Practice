#include <iostream>
using namespace std;
int main() {
    int arr[]={10,20,30,40,50,60,70};
    int ar[]={};
    int n = sizeof(arr)/sizeof(int);
    int i=0;
    while(i<n){
        if(i==0){
            ar[i]=arr[n-1];
        }
        else{
            ar[i]=arr[i-1];
        }

        i++;
    }
    for(int k=0; k<n; k++){
        cout<<ar[k]<<" ";
    }



    return 0;
}