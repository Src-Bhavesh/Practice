#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    int i;
    cin>>i;
    int j;
    cin>>j;
    swap(arr[i],arr[j]);
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }



    return 0;
}