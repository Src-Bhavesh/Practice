#include <iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(int);
    int total = 0;

    for(int i=0; i<n; i++){
        int li=0;
        int ri=0;
        for (int j=i-1; j>=0; j--){
            if(li<arr[j]){
                li=arr[j];
            }
        }

        for(int j=i+1; j<n; j++){
            if(ri<arr[j]){
                ri=arr[j];
            }
        }
        int l=min(li,ri);
        if(l>arr[i]){
            total =total+l-arr[i];
        }

    }
    cout<<total;
    return 0;
}
