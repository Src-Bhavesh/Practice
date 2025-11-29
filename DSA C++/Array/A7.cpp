#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={20,5,0,25,15,10};
    int n= sizeof(arr)/sizeof(int);
    int s=INT_MIN;
    int d=INT_MIN;
    int f=INT_MIN;
    for(int i=0; i<n; i++){
        if (arr[i] > s) {
            s = arr[i];
        } else if (arr[i] > d && arr[i] != s) {  
            d = arr[i];
        } else if (arr[i] > f && arr[i] != d && arr[i] != s) {
            f = arr[i];
        }
    } 
    cout<<f<<" ";
    cout<<d<<" ";
    cout<<s<<" ";

    return 0;
}