#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        int j;
        cin>>j;
        arr[i]=j;
    }
    int ar[n];

    for(int i=0; i<n; i++){
        int s=1;
        int l=0;
        for(int j=0; j<n; j++){
            if(i!=j){
                s=s*arr[j];
            }
            ar[i]=s;
        }
    }
    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
return 0;
}