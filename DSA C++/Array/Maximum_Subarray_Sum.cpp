#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int max = INT_MIN;

    for(int i=0; i<n; i++){
        int curr_sum = 0;
        for(int j=i; j<n; j++){
            curr_sum = curr_sum + arr[j];
            if(curr_sum > max){
                max = curr_sum;
            }

        }
    }
    cout<<max;
    return 0;
}