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
    int l;
    cin>>l;
    for(int i=0; i<n; i++){
        if(arr[i]==l){
            cout<<i;
        }
    }
    return 0;
}