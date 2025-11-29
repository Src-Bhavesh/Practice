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
    int l=0;
    int r=n-1;
    while(r>l){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }

     for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}