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
    bool flag = true;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        
        if(!flag){
        break;
    }
    }
    

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

