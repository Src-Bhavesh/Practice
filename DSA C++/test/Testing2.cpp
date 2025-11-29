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
    sort(arr, arr+n);
    int tar;
    cin>>tar;
    int sum = 0;
    for(int i=0; i<n; i++){
        int l=i+1;
        int r=n-1;
        
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==tar){
                cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
                l++;
                r--;
            }
            else if(arr[i]+arr[l]+arr[r]<tar){
                l++;   
            }
            else{
                r--;
            }
            
        
        }
        

        

    }



    return 0;
}