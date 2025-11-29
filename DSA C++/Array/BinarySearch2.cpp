#include <iostream>
using namespace std;
int main(){
    int n=100000;
    
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i]=i+1;
    }
    int tar;
    cin>>tar;

    int start = 0;
    int end = n-1;

    while(start<=end){
    int m = (start+(end-start))/2;
        // int m = (start + end)/2 
    if(arr[m]==tar){
        cout<<m<<endl;
        return 0;
    }
    else if(arr[m]>tar){
        end = m-1;
    }
    else{
        start=m+1;
    }

}
cout<<"No Target Found";
return 0;
}