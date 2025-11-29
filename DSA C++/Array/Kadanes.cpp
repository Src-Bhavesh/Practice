#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={-1,2,4,5,-4,5,6,3,-8,7,-2,1};
    int n=sizeof(arr)/sizeof(int);
    int sum=0;
    int max=INT_MIN;
    
    for(int i=0; i<n; i++){
        sum=sum+arr[i];

        if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum =0;
        }
    }
    cout<<max<<endl;
    return 0;
}