#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,6,7,8};
    int n= sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i=0; i<n-1; i++){
        sum=sum+arr[i];
    }
    int req_sum=(n*(n+1))/2;


   int num = req_sum-sum;
   cout<<num;


   return 0;
}